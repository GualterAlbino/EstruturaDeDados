//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include "Fun��es.h"

using namespace std;

//Fun��es que criei e usei no projeto separadas das que nos foram fornecidas.


void nomes_das_cidades(int tamanho){ ///Fun��o responsavel por coletar os nomes das cidades.

     char **matriz_nome;

     matriz_nome = (char**) malloc(tamanho*(sizeof(char*))); ///Fun��o para aloca��o din�mica de memoria da matriz de nomes.

        for(int i = 0; i < tamanho; i++){
            matriz_nome[i] = (char*) malloc(60*(sizeof(char)));
    }

    int i;

    for(i=0 ; i< tamanho; i++){
        cout<<"Digite o nome da cidade ["<<i<<"] :";
        fflush(stdin);
        gets(matriz_nome[i]);

    }

}

void alimenta_matriz( int tamanho , int c){ ///Fun��o responsavel por alocar memoria dinamicamente e alimentar a matriz.


    system("cls");
    int i; //Varivel usada nas linhas da matriz.
    int j; //Variavel usada nas colunas da matriz.
    int **m; //Variavel para cria��o da matriz.

    int recebe; //Variavel intermediaria que recebe e repassa para enfileirar.

    Fila_Construtor();




    m = (int**) malloc(tamanho*(sizeof(int*))); ///Fun��o para aloca��o din�mica de memoria da matriz.
        for(int i = 0; i < tamanho; i++){
            m[i] = (int*) malloc(tamanho*(sizeof(int)));
    }





    //Instru��o dada ao usuario para o correto preenchimento
    cout<<"\nSe existir conectividade entre as cidades, digite 1, e se n�o houver digite 0.";
    cout<<"\nValores incorretos digitados ser�o substituidos pelo mais proximo de 0 ou 1.\n\n";

    for(i = 0; i < tamanho; i++){
      for(j = 0; j < tamanho; j++){

            if (i == j){ //Se I for igual a J a matriz recebe 0, j� que a dist�ncia de uma cidade at� ela mesma � 0.
                m[i][j]=0;


            }else{

                cout<<"Qual a dist�ncia da cidade ["<<i<<"] da cidade ["<<j<<"]: ";
                cin>>m[i][j];



                if (m[i][j] != 0 && m[i][j] != 1){

                    if(m[i][j] < 0){
                        m[i][j] = 0;




                    }else if (m[i][j] > 1){
                        m[i][j] = 1;



                    }

                    cout<<"\nN�mero invalido!";
                    cout<<"\nS� se � permitido 0 ou 1\n\n";



                }
            }
        }
    }





    for(j = 0; j< tamanho; j++){
        recebe= m[c][j] ;
        Fila_Enfileirar(recebe);

    }

    if(!Fila_Desenfileirar(recebe)){
        cout<<"\n\n\nErro ao desenfileirar!";
        exit(1);

    }else{
        i=0;
        while(Fila_Desenfileirar(recebe)){
            cout<<"\nA dist�ncia da cidade ["<<c<<"] ate a cidade ["<<i<<"] �: ";
            cout<<Fila_Desenfileirar(recebe);
            i++;

        }
    }
}
