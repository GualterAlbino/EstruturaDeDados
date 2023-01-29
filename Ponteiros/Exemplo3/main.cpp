/*

       Programa para exemplificar a atribui��o de ponteiros
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10;
    int *p1, *p2;

    p1 = &x;  //p1 aponta para x
    p2 = p1;  //p2 aponta para o mesmo endere�o apontado por p1
              //ent�o p2 aponta para x

    //os dois printfs abaixo devem mostrar o endere�o da vari�vel x
    printf("endereco apontado por p1: %X\n", p1);
    printf("endereco apontado por p2: %X\n", p2);


    //mostra o valor de x, e repete esse valor atrav�s dos ponteiros
    //o * nos ponteiros faz com que o valor armazenado na vari�vel apontada por
    //eles seja exibido
    printf("Valor de x: %d\n", x);
    printf("Valor de x (p1): %d\n", *p1);
    printf("Valor de x (p2): %d\n", *p2);


    system("pause");
    return 0;
}
