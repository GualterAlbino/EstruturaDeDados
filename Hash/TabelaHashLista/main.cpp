#include <iostream>
#include "tabelaHash.h"
#include <stdlib.h>

using namespace std;

int main()
{

    int vOpcao, vChave;

    tabelaHash *th = new tabelaHash(7);

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

            cout << "\nDigite um valor: ";
            cin >> vChave;

            th->insere(vChave);

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 2:

            cout << "\nDigite um valor para buscar: ";
            cin >> vChave;

            if(th->busca(vChave) != -1) cout << "\n\n Valor encontrado";
            else cout << "\n\n Valor nao encontrado";

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 3:

            cout << "\nDigite uma valor para remocao: ";
            cin >> vChave;

            if(th->remover(vChave) != -1) cout << "\n Valor removido";
            else cout << "\n Valor nao encontrado";

            cout << "\n\n";
            system("pause");
            system("cls");
            break;

        case 4:

            th->imprime();

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
