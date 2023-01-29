#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Fatorial.h"

using namespace std;

//Função principal para demonstrar o uso dos fatoriais
int main()
{

    int valor, resultado;

    printf("Entre com o valor para o calculo do fatorial: ");
    scanf("%d", &valor);


    resultado = FatorialIterativo(valor);

    if(resultado > 0)
      printf("\n\nFatorial iterativo: %d", resultado);
    else
      printf("\n\nEntrada invalida");



    resultado = FatorialRecursivo(valor);

    if(resultado > 0)
      printf("\n\nFatorial recursivo: %d", resultado);
    else
      printf("\n\nEntrada invalida");


    resultado = Fatorial_Com_Pilha(valor);

    if(resultado > 0)
      printf("\n\nFatorial com pilha: %d", resultado);
    else
      printf("\n\nEntrada invalida");

    printf("\n\n");
    return 0;
}
