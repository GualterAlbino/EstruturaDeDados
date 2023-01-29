

/*
|=================================================================================================================|
| Nome: Gualter Albino de Souza Neto.                                                                             |
|                                                                                                                 |
| Objetivo do programa: Apresentar na tela todos os nós de um nivel indo da esquerda para direita                 |
| usando uma fila para armazenar os nós de um nivel antes de passar para outro.                                   |
|                                                                                                                 |
|                                                                                                                 |
| Instrução: Inicialmente o programa solicitará um numero para ser inserido na arvore, em seguida o programa      |
| perguntará se qeseja inserir mais. O usuario deve digitar S para sim, e N para não.                             |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|Resultado:O programa alimenta a arvore, enfileira por nivel,apresenta na tela os valores desenfileirados pelo    |
|nivel com a quantidade de nós e diferenciando a raiz.                                                            |
|                                                                                                                 |
|Problema:                                                                                                        |
|Apresenta a altura de forma incorreta,foi feita uma função separada para o calculo de altura que não             |
|obteu sucesso.                                                                                                   |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|                                                                                                                 |
|=================================================================================================================|
*/


//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBinariaBusca.h"
#include "Fila.h"
#include "Funcoes.h"
#include <locale.h> //necessário para usar setlocale



using namespace std;


int main()
{
    setlocale(LC_ALL, "Portuguese");//Permitir o uso de acentuação

    ///Construtores dos TADs.
    Fila_Construtor(); //Inicialização da fila
    ArvoreBinariaBusca_Construtor(); //Inicialização da arvore

    ///Declaração de variaveis.
    int escolha; //Variavel usada para entrar na funçãode PERCURSO

    ///Chamada de funções.
    alimentacao();//Chamada da função que alimenta a arvore
    escolha=5;//Variavel usada para entrar na função de ENFILEIRAR usando a função de PERCURSO
    ArvoreBinariaBusca_Percurso(escolha);//Uso a função de percurso pra chamar a função de enfileirar

    ///escolha=4;//Variavel usada para entrar na função de ALTURA usando a função de PERCURSO
    ///ArvoreBinariaBusca_Percurso(escolha);//Uso a função de percurso pra chamar a função de altura


    ///Liberação de memoria.
    ArvoreBinariaBusca_Destrutor();//Função para liberar memoria alocada dinamicamente da Arvore
    Fila_Destrutor();//Função para liberar memoria alocada dinamicamente da Fila

    return 0;
}
