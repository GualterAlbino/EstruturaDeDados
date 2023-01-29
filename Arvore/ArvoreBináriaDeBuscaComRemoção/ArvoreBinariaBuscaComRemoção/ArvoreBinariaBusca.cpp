//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinariaBusca.h"

using namespace std;

TipoCelula *Raiz;

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

void ArvoreBinariaBusca_Destrutor(TipoCelula *&Raiz){


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

bool ArvoreBinariaBusca_Inserir(TipoDado Elemento, TipoCelula *&Raiz)
{

     if(Raiz == NULL)
     {
        if((Raiz = new(TipoCelula)) == NULL)
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

bool ArvoreBinariaBusca_Pesquisar(TipoDado Elemento, TipoCelula *Raiz)
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
        default: cout <<"Ordem desconhecida";
     }
     cout << endl << endl;
     system("pause");
}

void ArvoreBinariaBusca_EmOrdem(TipoCelula *Raiz)
{

     if(Raiz!=NULL)
     {
         ArvoreBinariaBusca_EmOrdem(Raiz->Esq);
         cout << Raiz->Item << " ";
         ArvoreBinariaBusca_EmOrdem(Raiz->Dir);
     }
}

void ArvoreBinariaBusca_PreOrdem(TipoCelula *Raiz)
{

     if(Raiz!=NULL)
     {
         cout << Raiz->Item << " ";
         ArvoreBinariaBusca_PreOrdem(Raiz->Esq);
         ArvoreBinariaBusca_PreOrdem(Raiz->Dir);
     }
}

void ArvoreBinariaBusca_PosOrdem(TipoCelula *Raiz)
{

     if(Raiz!=NULL)
     {
         ArvoreBinariaBusca_PosOrdem(Raiz->Esq);
         ArvoreBinariaBusca_PosOrdem(Raiz->Dir);
         cout << Raiz->Item << " ";
     }
}


bool ArvoreBinariaBusca_Remocao_Fusao(TipoDado Elemento)
{

     return ArvoreBinariaBusca_Remocao_Fusao(Elemento, Raiz);
}

bool ArvoreBinariaBusca_Remocao_Fusao(TipoDado Elemento, TipoCelula *&Raiz)
{

    TipoCelula *Temp;

    if(Raiz == NULL)
    {
        return false;
    }
    else
    {
        if(Elemento < Raiz->Item)
            return ArvoreBinariaBusca_Remocao_Fusao(Elemento, Raiz->Esq);
        else
        {
            if(Elemento > Raiz->Item)
                return ArvoreBinariaBusca_Remocao_Fusao(Elemento, Raiz->Dir);
            else
            {

                Temp = Raiz;

                if(Raiz->Dir == NULL)
                {
                    Raiz = Raiz->Esq;

                }
                else
                {
                    if(Raiz->Esq == NULL)
                    {
                        Raiz = Raiz->Dir;

                    }
                    else  // O n� em quest�o tem dois filhos
                    {

                        Temp = Raiz -> Esq;

                        while(Temp->Dir!= NULL)
                        {
                            Temp = Temp->Dir;
                        }

                        Temp->Dir = Raiz->Dir;
                        Temp = Raiz;
                        Raiz = Raiz->Esq;



                    }

                }

                Temp -> Esq = Temp->Dir = NULL;
                delete Temp;
                Contador--;
                return true;


            }

        }
    }
}


bool ArvoreBinariaBusca_Remocao_Copia(TipoDado Elemento)
{

     return ArvoreBinariaBusca_Remocao_Copia(Elemento, Raiz);
}

bool ArvoreBinariaBusca_Remocao_Copia(TipoDado Elemento, TipoCelula *&Raiz)
{
    TipoCelula *Temp, *Ant;


    if(Raiz == NULL)
    {
        return false;
    }
    else
    {
        if(Elemento < Raiz->Item)
            return ArvoreBinariaBusca_Remocao_Copia(Elemento, Raiz->Esq);
        else
        {
            if(Elemento > Raiz->Item)
                return ArvoreBinariaBusca_Remocao_Copia(Elemento, Raiz->Dir);
            else///Se n�o � maior nem menor, � ele
            {

                Temp = Raiz;

                if(Raiz->Dir == NULL)
                {
                    Raiz = Raiz->Esq;

                }
                else
                {
                    if(Raiz->Esq == NULL)
                    {
                        Raiz = Raiz->Dir;

                    }
                    else  /// O n� em quest�o tem dois filhos
                    {

                        Temp = Raiz -> Esq;
                        Ant = Raiz;

                        while(Temp->Dir!= NULL)
                        {
                            Ant = Temp;
                            Temp = Temp->Dir;
                        }

                        Raiz->Item = Temp->Item;

                        if(Ant == Raiz)
                        {
                            Ant->Esq = Temp->Esq;
                        }
                        else
                        {
                            Ant->Dir = Temp->Esq;
                        }

                    }

                }

                Temp -> Esq = Temp->Dir = NULL;
                delete Temp;
                Contador--;
                return true;
            }
        }
    }
}
