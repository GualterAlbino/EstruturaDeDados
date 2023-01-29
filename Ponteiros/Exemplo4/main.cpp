/*

       Programa para exemplificar a aritm�tica e compara��o de ponteiros
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x = 10;
    char y = 'a', z = 'b';
    int *p1, *p2;
    char *p3, *p4;
    p1 = &x;  //p1 aponta para x
    p2 = p1;  //p2 aponta para o mesmo endere�o apontado por p1
              //ent�o p2 aponta para x

    p3 = &y;
    p4 = &z;

    //os dois printfs abaixo devem mostrar o endere�o da vari�vel x
    printf("\nendereco apontado por p1: %X", p1);
    printf("\nendereco apontado por p2: %X", p2);

    //os dois printfs abaixo devem mostrar os endere�os das vari�veis y e z, respectivamente
    printf("\nendereco apontado por p3: %X", p3);
    printf("\nendereco apontado por p4: %X", p4);


    //mostra o valor de x, y e z e repete esses valores atrav�s dos ponteiros
    //o * nos ponteiros faz com que o valor armazenado na vari�vel apontada por
    //eles seja exibido
    printf("\nValor de x: %d", x);
    printf("\nValor de y: %c", y);
    printf("\nValor de z: %c", z);
    printf("\nValor de x (p1): %d", *p1);
    printf("\nValor de x (p2): %d", *p2);
    printf("\nValor de y (p3): %c", *p3);
    printf("\nValor de z (p4): %c", *p4);


    //compara��o entre ponteiros
    //compara se p3 e p4 apontam para o mesmo endere�o
    if(p3 == p4)
      printf("\nP3 e P4 apontam para o mesmo endereco");
    else
      printf("\nP3 e P4 NAO apontam para o mesmo endereco");


    //p4 aponta para o pr�ximo endere�o de mem�ria considerando o seu tipo base
    //como p4 aponta para um char, e o tamanho do tipo char � 1 byte,
    //e ainda cada endere�o de mem�ria armazena 1 byte, ent�o p4 aponta para o
    //endere�o de mem�ria imediatamente depois do seu
    //o mesmo vale para o decremento
    p4++;
    printf("\n\n\Novo endereco apontado por p4: %X", p4);
    printf("\nNovo valor apontado por p4: %c", *p4);

    //em outras situa��es, o ponteiro poderia ter como tipo base, por exemplo,
    //o tipo inteiro (int), o que faria com que seu incremento e decremento
    //fosse de 4 bytes

    //vale lembrar que esses valores de incremento est�o diretamente relacionados
    //com a arquitetura do computador onde o programa ser� executado.
    //arquiteturas diferentes podem ter tipos base com tamanhos diferentes


    //nova compara��o para saber se p3 e p4 apontam para o mesmo endere�o
    if(p3 == p4)
      printf("\nP3 e P4 apontam para o mesmo endereco\n\n\n");
    else
      printf("\nP3 e P4 NAO apontam para o mesmo endereco\n\n\n");



    system("pause");
    return 0;
}
