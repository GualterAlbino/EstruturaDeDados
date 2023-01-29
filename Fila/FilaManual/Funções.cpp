//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include "Funções.h"

using namespace std;

//Funções que criei e usei no projeto separadas das que nos foram fornecidas.


void nomes_das_cidades(int tamanho){ ///Função responsavel por coletar os nomes das cidades.

     char **matriz_nome;

     matriz_nome = (char**) malloc(tamanho*(sizeof(char*))); ///Função para alocação dinâmica de memoria da matriz de nomes.

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

void alimenta_matriz( int tamanho , int c){ ///Função responsavel por alocar memoria dinamicamente e alimentar a matriz.


    system("cls");
    int i; //Varivel usada nas linhas da matriz.
    int j; //Variavel usada nas colunas da matriz.
    int **m; //Variavel para criação da matriz.

    int recebe; //Variavel intermediaria que recebe e repassa para enfileirar.

    Fila_Construtor();




    m = (int**) malloc(tamanho*(sizeof(int*))); ///Função para alocação dinâmica de memoria da matriz.
        for(int i = 0; i < tamanho; i++){
            m[i] = (int*) malloc(tamanho*(sizeof(int)));
    }





    //Instrução dada ao usuario para o correto preenchimento
    cout<<"\nSe existir conectividade entre as cidades, digite 1, e se não houver digite 0.";
    cout<<"\nValores incorretos digitados serão substituidos pelo mais proximo de 0 ou 1.\n\n";

    for(i = 0; i < tamanho; i++){
      for(j = 0; j < tamanho; j++){

            if (i == j){ //Se I for igual a J a matriz recebe 0, já que a distância de uma cidade até ela mesma é 0.
                m[i][j]=0;


            }else{

                cout<<"Qual a distância da cidade ["<<i<<"] da cidade ["<<j<<"]: ";
                cin>>m[i][j];



                if (m[i][j] != 0 && m[i][j] != 1){

                    if(m[i][j] < 0){
                        m[i][j] = 0;




                    }else if (m[i][j] > 1){
                        m[i][j] = 1;



                    }

                    cout<<"\nNúmero invalido!";
                    cout<<"\nSó se é permitido 0 ou 1\n\n";



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
            cout<<"\nA distância da cidade ["<<c<<"] ate a cidade ["<<i<<"] é: ";
            cout<<Fila_Desenfileirar(recebe);
            i++;

        }
    }
}
