/*
|=================================================================================================================|
| Nome: Gualter Albino de Souza Neto.                                                                             |
|                                                                                                                 |
| Objetivo do programa: O programa tem o objetivo de fazer as opera��es de uni�o, interse��o                      |
| e subtra��o entre as listaso.                                                                                   |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
| Instru��o: Atrav�s de um menu de escolha o usuario deve alimentar as filas 1 e 2, e a partir disso              |
|selecionar a opera��o que deseja.                                                                                |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|      |
|                                                                                                                 |
|                                                                                                                 |
|=================================================================================================================|
*/

//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Lista.h"
#include "Funcoes.h"


using namespace std;





int main()
{
    setlocale(LC_ALL, "Portuguese");
    int op;


do{

    menu();
    cin>>op;


    switch(op){

    case 1:
        system("cls");
        alimenta1();
        system("pause");
        system("cls");
        break;

    case 2:
        system("cls");
        alimenta2();
        system("pause");
        system("cls");
        break;

    case 3:
        system("cls");
        uniao();
        system("pause");
        system("cls");
        break;

    case 4:
        system("cls");
        cout<<"conteudo";
        break;

    case 5:
        system("cls");
        cout<<"conteudo";
        break;

    case 6:
        system("cls");
        cout<<"conteudo";
        break;

    case 7:
        system("cls");
        cout<<"\n\n\tAdeus!\n\n\n";
        exit(0);
        break;

    default:
        system("cls");
        cout<<"\n\nDIGITE UMA OP��O VALIDA!\n\n";
        system("pause");
        system("cls");
        main();

    }

}while(op!=7);



    return 0;
}
