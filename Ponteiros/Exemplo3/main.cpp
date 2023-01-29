/*

       Programa para exemplificar a atribuição de ponteiros
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10;
    int *p1, *p2;

    p1 = &x;  //p1 aponta para x
    p2 = p1;  //p2 aponta para o mesmo endereço apontado por p1
              //então p2 aponta para x

    //os dois printfs abaixo devem mostrar o endereço da variável x
    printf("endereco apontado por p1: %X\n", p1);
    printf("endereco apontado por p2: %X\n", p2);


    //mostra o valor de x, e repete esse valor através dos ponteiros
    //o * nos ponteiros faz com que o valor armazenado na variável apontada por
    //eles seja exibido
    printf("Valor de x: %d\n", x);
    printf("Valor de x (p1): %d\n", *p1);
    printf("Valor de x (p2): %d\n", *p2);


    system("pause");
    return 0;
}
