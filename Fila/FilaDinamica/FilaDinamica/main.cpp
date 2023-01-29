//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

using namespace std;


//Fun��o principal para demonstrar o uso da Fila
int main()
{

    int x; //Vari�vel utilizada para receber o valor digitado do usu�rio e colocar na Fila (Enfileirar)
           //Tamb�m ser� utilizada para receber os valores dos m�todos Fila_Desenfileirar e Fila_Frente
    int opcao; //vari�vel utilizada no Menu para testar a Fila

    Fila_Construtor();  //para iniciar a Fila


    printf("Digite dados para Enfileirar");



    do{  //menu com op��es para testar a implementa��o da Fila Din�mica


         system("cls");

          printf("Programa para uso da Fila Dinamica\n\n");
          printf("Escolha uma das opcoes abaixo.");
          printf("\n\n\nMenu: \n");
          printf("\n1 - Enfileirar");
          printf("\n2 - Desenfileirar");
          printf("\n3 - Primeiro elemento");
          printf("\n4 - Numero de elementos na Fila");
          printf("\n5 - Fila Vazia");
          printf("\n6 - Sair\n");
          printf("\nOpcao: ");
          scanf("%d", &opcao);

          switch(opcao){

             case 1:
                        printf("\n\nDigite o dado: ");
                        scanf("%d", &x);

                        if(Fila_Enfileirar(x))  //Tenta armazenar na fila
                           printf("\nElemento armazenado na Fila\n\n");
                        else printf("Erro: Nao ha memoria disponivel\n\n");

                        system("pause");

                        break;


             case 2:    if(Fila_Desenfileirar(x)){  //Tenta Desenfileirar um elemento (x � retornado por refer�ncia)

                           printf("\n\nElemento: %d\n\n", x);  //exibe o valor Desenfileirado
                        }
                        else printf("\n\nNao foi possivel desenfileirar.\nA fila esta vazia\n\n");
                        system("pause");

                        break;

             case 3:     if(Fila_Frente(x))  //Tenta exibir o elemento no in�cio da Fila sem Desenfileirar (x � retornado por refer�ncia)
                            printf("\n\nElemento na frente da Fila: %d\n\n", x);
                         else printf("\n\nErro: Fila Vazia\n\n");

                         system("pause");

                         break;


             case 4: printf("\n\nNumero de elementos na Fila: %d\n\n", Fila_Tamanho());  //exibe o n�mero de elementos da pilha
                     system("pause");

                     break;

             case 5: if(Fila_Vazia())
                       printf("\n\nFila Vazia\n\n");
                     else printf("\n\nA fila nao esta vazia\n\n");

                     system("pause");
                     break;

             case 6:  Fila_Destrutor();
                      printf("\n\n");
                      system("pause");
                      break;

             default: printf("\n\nOpcao invalida\n\n");
                      system("pause");
          }
    }while(opcao != 6);

    return 0;
}
