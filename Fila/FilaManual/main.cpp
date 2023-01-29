/*
|=================================================================================================================|
| Nome: Gualter Albino de Souza Neto.                                                                             |
|                                                                                                                 |
| Objetivo do programa: O programa tem o objetivo de capturar uma matriz de conectividade de um determinado numero|
| de cidades que foi informado pelo usuario e mostrar a distância ate elas.                                       |
|                                                                                                                 |
|                                                                                                                 |
| Instrução: O programa solicitará o numero de cidades e em seguida qual cidade ele comparará com as outras       |
| e então alimentará a matriz, o usuario deve digitar 1 para ligação entre elas e 0 mostrando que                 |
| não há essa ligação.                                                                                            |
|                                                                                                                 |
|                                                                                                                 |
| Resultado:O programa solicita os parâmetros e exibe na telas as ligações da cidade correspodnente a escolha     |
| em comparação com as outras.                                                                                    |
|                                                                                                                 |
|=================================================================================================================|
*/



//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include <locale.h>
#include "Funções.h"

using namespace std;





int main()
{
    setlocale(LC_ALL, "Portuguese");


    int **m; //Usado na passagem para a matriz.
    char **matriz_nome;
    int numero_de_cidades; //Número de cidades.
    int c;//Variavel usada para receber a cidade a ser verificada as distancias.




    cout<<"Digite o número de cidades: ";
    cin>>numero_de_cidades;

    nomes_das_cidades(numero_de_cidades);



    cout<<"\nDigite o numero da cidade que quer verificar as distâncias: "; //Recebe a cidade que quer verificar as distâncias.
    cin>>c;

    alimenta_matriz(numero_de_cidades, c);


    system("pause");
    cout << endl;
    return 0;
}
