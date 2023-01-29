//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#include "Funcoes.h"
#include <string.h>

using namespace std;

void menu(){ ///Menu de escolhas
    setlocale(LC_ALL, "Portuguese");
    cout<<"\n\tMENU\n";
    cout<<"\n1 -Inserir elemento na Fila 1";
    cout<<"\n2- Inserir elemento na Fila 2";
    cout<<"\n3- União de 1 com 2";
    cout<<"\n4- Interseção de 1 com 2";
    cout<<"\n5- Diferença de 1 com 2";
    cout<<"\n6- Diferença de 2 com 1";
    cout<<"\n7- Sair";
    cout<<"\nSelecione uma opção: ";


}

 int alimenta1(){ ///Função responsavel por alimentar a Lista 1

    Lista_Construtor();

    int elemento;   //Variavel intermediaria
    char resposta;  //Variavel usada pata a verificação de S/N
    int tamanho;    //Tamanho do vetor
    int i,j;        //Variaveis usadas nos laços FOR
    int auxiliar;   //Variavel auxiliar para a ordenação
    int *vetor1;    //Vetor alocado dinamicamente

    cout<<"Digite a quantidade de elementos na Fila 1: ";
    cin>>tamanho;

    if(!(vetor1 = (int *) malloc(sizeof(int)* tamanho))){///Verifica se foi possivel alocar
       cout<<"Erro ao alocar!\n\n\n";
       exit(1);
    }



    for(i=0; i <tamanho ; i++){ ///Armazena no vetor
      cout<<"Digite o numero que deseja inserir: ";
      cin>>vetor1[i];
    }


   for(i=0; i<tamanho; i++) ///Função para ordenação do vetor
    {
        for(j=i+1; j<tamanho; j++)
        {
            if(vetor1[i]>vetor1[j])
            {
                auxiliar=vetor1[i];
                vetor1[i]=vetor1[j];
                vetor1[j]=auxiliar;
            }
        }
    }


    for(i=0;i< tamanho;i++){
        elemento = vetor1[i];
        if(!Lista_Inserir_Fim(elemento)){
            cout<<"\nErro!\n";
        }

    }
    cout<<"Os elementos depois de ordenados:\n";
    for(i=0;i<tamanho;i++){
        cout<<"valor ["<<i<<"] :"<<vetor1[i]<<"\n";
    }

}

int alimenta2(){ ///Função responsavel por alimentar a Lista 2

    Lista2_Construtor();

    int elemento;   //Variavel intermediaria
    char resposta;  //Variavel usada pata a verificação de S/N
    int tamanho;    //Tamanho do vetor
    int i,j;        //Variaveis usadas nos laços FOR
    int auxiliar;   //Variavel auxiliar para a ordenação
    int *vetor1;    //Vetor alocado dinamicamente

    cout<<"Digite a quantidade de elementos na Fila 2: ";
    cin>>tamanho;

    if(!(vetor1 = (int *) malloc(sizeof(int)* tamanho))){///Verifica se foi possivel alocar
       cout<<"Erro ao alocar!\n\n\n";
       exit(1);
    }



    for(i=0; i <tamanho ; i++){ ///Armazena no vetor
      cout<<"Digite o numero que deseja inserir: ";
      cin>>vetor1[i];
    }


   for(i=0; i<tamanho; i++) ///Função para ordenação do vetor
    {
        for(j=i+1; j<tamanho; j++)
        {
            if(vetor1[i]>vetor1[j])
            {
                auxiliar=vetor1[i];
                vetor1[i]=vetor1[j];
                vetor1[j]=auxiliar;
            }
        }
    }


    for(i=0;i< tamanho;i++){
        elemento = vetor1[i];
        if(!Lista2_Inserir_Fim(elemento)){
            cout<<"\nErro!\n";
        }

    }
    cout<<"Os elementos depois de ordenados:\n";
    for(i=0;i<tamanho;i++){
        cout<<"valor ["<<i<<"] :"<<vetor1[i]<<"\n";
    }


}

int uniao(){

    Lista3_Construtor();

    int elemento1;
    int elemento2;

    while(Lista_Remover_Fim(elemento1) || Lista2_Remover_Fim(elemento2)){

        if(!Lista_Remover_Fim(elemento1)){ //Verificação de remoção da Lista 1
            cout<<"\n\nErro ao remover elemento 1!\n\n";
        }


        if(!Lista2_Remover_Fim(elemento2)){//Verificação de remoção da lista 2
            cout<<"\n\nErro ao remover elemento 2!\n\n";
        }


        if(elemento1 != elemento2){//Função que verifica se são diferentes para não listar o mesmo elemento duas vezes na união

            if(!Lista3_Inserir_Fim(elemento1)){ //Verifica se foi possivel inserir
                cout<<"\n\nErro ao inserir elemento 1!\n\n";
            }
            cout<<"empilhou: "<<elemento1;

            if(!Lista3_Inserir_Fim(elemento2)){ //Verifica se foi possivel inserir
                cout<<"\n\nErro ao inserir elemento 2!\n\n";
            }
            cout<<"Empilhou: "<<elemento2;

            }else{//Se forem iguais, se insere apenas um deles

                if(!Lista3_Inserir_Fim(elemento1)){ //Verifica se foi possivel inserir
                    cout<<"\n\nErro ao inserir!\n\n";
            }
        }
    }
    int x;
    cout<<"\n\nTamanho:"<<Lista3_Tamanho()<<"\n";
    cout<<"\n\n\nO resultado da união é:\n";
    while(Lista3_Remover_Fim(x)){
        cout<<x<<" - ";
    }

}

int intersecao(){

    Lista3_Construtor();

    int elemento1=0;
    int elemento2=0;




}

