

/*
|=================================================================================================================|
| Nome: Gualter Albino de Souza Neto.                                                                             |
|                                                                                                                 |
| Objetivo do programa: Apresentar na tela todos os n�s de um nivel indo da esquerda para direita                 |
| usando uma fila para armazenar os n�s de um nivel antes de passar para outro.                                   |
|                                                                                                                 |
|                                                                                                                 |
| Instru��o: Inicialmente o programa solicitar� um numero para ser inserido na arvore, em seguida o programa      |
| perguntar� se qeseja inserir mais. O usuario deve digitar S para sim, e N para n�o.                             |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|Resultado:O programa alimenta a arvore, enfileira por nivel,apresenta na tela os valores desenfileirados pelo    |
|nivel com a quantidade de n�s e diferenciando a raiz.                                                            |
|                                                                                                                 |
|Problema:                                                                                                        |
|Apresenta a altura de forma incorreta,foi feita uma fun��o separada para o calculo de altura que n�o             |
|obteu sucesso.                                                                                                   |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|=================================================================================================================|
*/


//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinariaBusca.h"
#include "Fila.h"
#include "Funcoes.h"
#include <locale.h> //necess�rio para usar setlocale



using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");//Permitir o uso de acentua��o

    ///Construtores dos TADs.
    Fila_Construtor(); //Inicializa��o da fila
    ArvoreBinariaBusca_Construtor(); //Inicializa��o da arvore

    ///Declara��o de variaveis.
    int escolha; //Variavel usada para entrar na fun��ode PERCURSO

    ///Chamada de fun��es.
    alimentacao();//Chamada da fun��o que alimenta a arvore
    escolha=5;//Variavel usada para entrar na fun��o de ENFILEIRAR usando a fun��o de PERCURSO
    ArvoreBinariaBusca_Percurso(escolha);//Uso a fun��o de percurso pra chamar a fun��o de enfileirar

    ///escolha=4;//Variavel usada para entrar na fun��o de ALTURA usando a fun��o de PERCURSO
    ///ArvoreBinariaBusca_Percurso(escolha);//Uso a fun��o de percurso pra chamar a fun��o de altura


    ///Libera��o de memoria.
    ArvoreBinariaBusca_Destrutor();//Fun��o para liberar memoria alocada dinamicamente da Arvore
    Fila_Destrutor();//Fun��o para liberar memoria alocada dinamicamente da Fila

    return 0;
}
