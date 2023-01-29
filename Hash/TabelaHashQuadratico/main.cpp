#include <iostream>
#include "TabelaHash.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

using namespace std;

int main()
{

    TabelaHash *tab = new TabelaHash(); //objeto tabelahash
    int elemento,op;
    int indice;


    while(op != 8) // Menu
    {
        cout << "\tMENU\n\n1-INSERIR ELEMENTO\n2-BUSCAR NA HASH\n3-DELETAR ELEMENTO\n4-IMPRIMIR HASH\n5-SAIR" << endl;
        cin >> op ;
        switch(op)
        {
        case 1:

            cout << "Digite un Valor"<< endl;
            cin >> elemento;

            if(tab->insereHash(elemento))
            {

                cout << "Valor inserido com sucesso"<< endl;

            }
            else
            {
                cout <<"Falha ao enserir elemento"<< endl;
                cout <<"Tabela cheia"<< endl;

            }
            system("pause");

            break;
        case 2:

            cout << "Digite o Valor a ser encontrado"<< endl;
            cin >> elemento;

            if(tab->buscaHash(elemento,indice))
            {
                cout << "Valor encontrado no indice :" << indice << endl;
            }
            else
            {
                cout << "Valor nao encontrado"<< endl;
            }
            system("pause");

            break;
        case 3:

            cout << "Digite o Valor a ser excluido"<< endl;
            cin >> elemento;

            if(tab->removeHash(elemento,indice))
            {
                cout << "Valor encontrado no indice :" << indice << endl;
                cout << "Valor Excluido"<< endl;
            }
            else
            {
                cout << "Valor nao encontrado"<< endl;
            }
            system("pause");

            break;
        case 4:

            tab->imprimeHash();
            system("pause");
            break;
        case 5:

            exit(0);
            break;

        default:

            system("cls");
            printf("\nOpcao invalida!\n");
            getch();
            break;
        }
        system("cls");
    }

    return 0;
}
