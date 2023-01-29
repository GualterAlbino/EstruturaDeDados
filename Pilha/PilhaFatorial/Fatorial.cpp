#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int FatorialIterativo(int n)
{

   int result = 1;

   if(n < 0 ) return -1;

   for(int i=2; i <= n; i++)
      result = result * i;

   return result;
}

int FatorialRecursivo (int n)
{
    int result;

    if(n < 0 ) return -1; //erro

    if(n == 0 || n == 1) return 1;

    result = FatorialRecursivo(n-1) * n;

    return result;
}

int Fatorial_Com_Pilha(int n)
{
    Pilha_Construtor();

    int result, elem;

    if(n < 0 ) return -1; //erro

    if(n == 0 || n == 1) return 1;

    while(n != 1){

      if(!Pilha_Empilhar(n))
        return -2;
      else n--;
    }

    result = 1;

    while(Pilha_Desempilhar(elem)){

      result = result * elem;
    }

    Pilha_Destrutor();

    return result;
}
