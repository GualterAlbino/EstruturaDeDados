#include <iostream>
#include "tabelaHash.h"
#include <stdlib.h>

using namespace std;

int main()
{

    int vOpcao, vChave, vValor;

    tabelaHash th(7);

    do
    {
        cout << "\n\n\t 1 -  INSERIR";
        cout << "\n\n\t 2 -  BUSCAR";
        cout << "\n\n\t 3 -  REMOVER";
        cout << "\n\n\t 4 -  IMPRIMIR";
        cout << "\n\n\t 5 -  SAIR";
        cout << "\n\n\t DIGITE UMA OPCAO: ";
        cin >> vOpcao;

        system("cls");

        switch(vOpcao)
        {
        case 1:

            cout << "\nDigite uma chave: ";
            cin >> vChave;
            cout << "\nDigite  um valor: ";
            cin >> vValor;
            th.insere (vChave, vValor);

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 2:

            cout << "\nDigite uma chave para buscar: ";
            cin >> vChave;

            if(th.busca(vChave) != -1) cout << "\n\n Chave encontrada";
            else cout << "\n\n Chave nao encontrada";

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 3:

            cout << "\nDigite uma chave para remocao: ";
            cin >> vChave;

            if(th.remover(vChave) != -1) cout << "\nChave removida";
            else cout << "\nChave nao encontrada";

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 4:

            th.imprime();

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 5:

            break;

        default:
            cout << "\n\nOpcao invalida, tente novamente";
            cout << "\n\n";
            system("pause");
            system("cls");
        }
    }while(vOpcao != 5);

    return 0;
}
