/*

    PONTEIROS

    -Uma vari�vel de ponteiro guarda o endere�o de uma outra vari�vel.

     O tipo de dado de uma vari�vel de ponteiro indica como o ponteiro deve
     tratar os dados no endere�o de mem�ria que ele armazena.


     Ponteiros s�o �teis para referenciar elementos de vetores e matrizes,
     al�m de permitirem a cria��o de estruturas din�micas de dados
     (Pilha, Fila, Lista, �rvore, Tabela Hash, etc.)


    - Diferen�as entre os operadores & e *


    - & => retorna o endere�o de mem�ria de seu operando (vari�vel).
      m = &count;
      m recebe o endere�o [de mem�ria] de count

    - * => retorna o valor armazenado no endere�o de seu operando.
      m = &count;
      q = *m;
      q recebe o valor de count
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int fonte, resultado; //vari�veis do tipo inteiro
    int *ponteiro; //ponteiro que aponta para um tipo base int
                   //ou seja, um ponteiro que pode apontar para uma outra vari�vel
                   //do tipo inteiro

    fonte = 10;
    ponteiro = &fonte; //ponteiro armazena o endere�o de mem�ria da vari�vel fonte
                       //em outras palavras, o ponteiro aponta para fonte
    resultado = *ponteiro;  //resultado recebe o valor armazenado na vari�vel apontada pelo ponteiro
                            //no caso, o valor 10

    printf("Resultado: %d\n\n", resultado);

    return 0;
}
