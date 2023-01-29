/*
|=================================================================================================================|
| Nome: Gualter Albino de Souza Neto.                                                                             |
|                                                                                                                 |
| Objetivo do programa: O programa tem o objetivo de capturar uma matriz de conectividade de um determinado numero|
| de cidades que foi informado pelo usuario e mostrar a dist�ncia ate elas.                                       |
|                                                                                                                 |
|                                                                                                                 |
| Instru��o: O programa solicitar� o numero de cidades e em seguida qual cidade ele comparar� com as outras       |
| e ent�o alimentar� a matriz, o usuario deve digitar 1 para liga��o entre elas e 0 mostrando que                 |
| n�o h� essa liga��o.                                                                                            |
|                                                                                                                 |
|                                                                                                                 |
| Resultado:O programa solicita os par�metros e exibe na telas as liga��es da cidade correspodnente a escolha     |
| em compara��o com as outras.                                                                                    |
|                                                                                                                 |
|=================================================================================================================|
*/



//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"
#include <locale.h>
#include "Fun��es.h"

using namespace std;





int main()
{
    setlocale(LC_ALL, "Portuguese");


    int **m; //Usado na passagem para a matriz.
    char **matriz_nome;
    int numero_de_cidades; //N�mero de cidades.
    int c;//Variavel usada para receber a cidade a ser verificada as distancias.




    cout<<"Digite o n�mero de cidades: ";
    cin>>numero_de_cidades;

    nomes_das_cidades(numero_de_cidades);



    cout<<"\nDigite o numero da cidade que quer verificar as dist�ncias: "; //Recebe a cidade que quer verificar as dist�ncias.
    cin>>c;

    alimenta_matriz(numero_de_cidades, c);


    system("pause");
    cout << endl;
    return 0;
}
