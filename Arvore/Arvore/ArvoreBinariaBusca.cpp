//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinariaBusca.h"
#include "Fila.h"


using namespace std;

TipoCelulaArvore *Raiz;

int Contador;

void ArvoreBinariaBusca_Construtor()
{

    Raiz = NULL;
    Contador = 0;
}

void ArvoreBinariaBusca_Destrutor(){


     ArvoreBinariaBusca_Destrutor(Raiz);
     Contador = 0;
}


void ArvoreBinariaBusca_Destrutor(TipoCelulaArvore *&Raiz){


     if(Raiz!=NULL)
     {
         ArvoreBinariaBusca_Destrutor(Raiz->Esq);
         ArvoreBinariaBusca_Destrutor(Raiz->Dir);

         delete(Raiz);
         Raiz = NULL;
     }
}

bool ArvoreBinariaBusca_Vazia()
{

   return Raiz == NULL;
}

int ArvoreBinariaBusca_Tamanho()
{

   return Contador;
}

bool ArvoreBinariaBusca_Inserir(TipoDado Elemento)
{

     return ArvoreBinariaBusca_Inserir(Elemento, Raiz);
}

bool ArvoreBinariaBusca_Inserir(TipoDado Elemento, TipoCelulaArvore *&Raiz)
{

     if(Raiz == NULL)
     {
        if((Raiz = new(TipoCelulaArvore)) == NULL)
           return false;
        else
        {
            Raiz->Item = Elemento;
            Raiz->Esq = Raiz->Dir = NULL;
            Contador++;
            return true;
        }
     }
     else
     {
         if(Elemento < Raiz->Item)
           return ArvoreBinariaBusca_Inserir(Elemento, Raiz->Esq);
         else
         {
            if(Elemento > Raiz->Item)
              return ArvoreBinariaBusca_Inserir(Elemento, Raiz->Dir);
            else return false;
         }
     }
}

bool ArvoreBinariaBusca_Pesquisar(TipoDado Elemento)
{

     return ArvoreBinariaBusca_Pesquisar(Elemento, Raiz);
}

bool ArvoreBinariaBusca_Pesquisar(TipoDado Elemento, TipoCelulaArvore *Raiz)
{

     if(Raiz == NULL) return false;
     else
     {
         if(Elemento < Raiz->Item)
           return ArvoreBinariaBusca_Pesquisar(Elemento, Raiz->Esq);
         else
         {
            if(Elemento > Raiz->Item)
              return ArvoreBinariaBusca_Pesquisar(Elemento, Raiz->Dir);
            else return true;
         }
     }
}

void ArvoreBinariaBusca_Percurso(int modo)
{

     switch (modo)
     {
        case 1: ArvoreBinariaBusca_PreOrdem(Raiz); break;
        case 2: ArvoreBinariaBusca_EmOrdem(Raiz); break;
        case 3: ArvoreBinariaBusca_PosOrdem(Raiz); break;
        case 4: ArvoreBinariaBusca_Altura(Raiz); break;
        case 5: ArvoreBinariaBusca_Enfileira(Raiz); break;

        default: cout <<"Ordem desconhecida"; break;
     }
     cout << endl << endl;
     system("pause");
}

void ArvoreBinariaBusca_EmOrdem(TipoCelulaArvore *Raiz)
{

     if(Raiz!=NULL)
     {
         ArvoreBinariaBusca_EmOrdem(Raiz->Esq);


         if (Fila_Enfileirar(*Raiz)){ ///Verifica se é possivel enfileirar
            //ok
         }else{
            cout<<"Erro!\n";
            exit(-1);
         }


         ArvoreBinariaBusca_EmOrdem(Raiz->Dir);



     }


}

void ArvoreBinariaBusca_Enfileira(TipoCelulaArvore *Raiz){

    int cont;
    if(Raiz==NULL)
        cout<<"Erro"<<endl;
    else{
        Fila_Enfileirar(*Raiz);
        while(!Fila_Vazia()){
            Fila_Desenfileirar(*Raiz);
                if(cont ==0){
                    cout<<"\nA raiz é: "<<' '<<Raiz->Item;
                    cont++;

                }else{
                    cout<<"\nO nó ["<<cont<<"] é: "<<' '<<Raiz->Item;
                    cont++;//Contador de nós

                }

            if(!Raiz->Esq==NULL)
                Fila_Enfileirar(*Raiz->Esq);

            if(!Raiz->Dir==NULL)
                Fila_Enfileirar(*Raiz->Dir);

        }
    }
    cout<<"\nA altura da árvore é: "<<cont - 1;
     ///A altura pode ser calculada pelo numero de arestas, e como
    ///o numero de arestas pode ser definido como "uma árvore com N nós possui (N - 1) arestas"
}

int ArvoreBinariaBusca_Altura(TipoCelulaArvore *Raiz){

    int ESQ;
    int DIR;

    if (Raiz == NULL){
        cout<<"\nÁrvore Vazia!\n";
        return -1;//Arvore vazia

    }else{
        ESQ = ArvoreBinariaBusca_Altura(Raiz->Esq);
        DIR = ArvoreBinariaBusca_Altura(Raiz->Dir);

    }


    if(ESQ < DIR){

        return DIR + 1;
        cout<<"A altura é: "<<DIR;

    }else{
        return ESQ + 1;
        cout<<"A altura é: "<<ESQ;
    }

}

void ArvoreBinariaBusca_PreOrdem(TipoCelulaArvore *Raiz)
{

     if(Raiz!=NULL)
     {
         cout << Raiz->Item << " ";
         ArvoreBinariaBusca_PreOrdem(Raiz->Esq);
         ArvoreBinariaBusca_PreOrdem(Raiz->Dir);
     }
}

void ArvoreBinariaBusca_PosOrdem(TipoCelulaArvore *Raiz)
{

     if(Raiz!=NULL)
     {
         ArvoreBinariaBusca_PosOrdem(Raiz->Esq);
         ArvoreBinariaBusca_PosOrdem(Raiz->Dir);
         cout << Raiz->Item << " ";
     }
}
