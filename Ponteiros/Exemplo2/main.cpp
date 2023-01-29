/*

    Programa para exemplificar o uso de variável, ponteiro
    endereço de memória e conteúdo de variável apontada por ponteiro

*/

#include <stdio.h>
#include <stdlib.h>


int x = 10;
int *ptr = &x;

void Mostrar ( void )
{

    printf("\n\n Variavel x: %d", x);
    printf("\n\n Endereco de x: %X", &x);
    printf("\n\n Variavel ptr: %X", ptr);
    printf("\n\n Endereco de ptr: %X", &ptr);
    printf("\n\n Valor apontado por ptr: %d\n\n", *ptr);
}


int main ( void )
{

   Mostrar ( );
   *ptr = 345;
   Mostrar ( );

   return 0;
}
