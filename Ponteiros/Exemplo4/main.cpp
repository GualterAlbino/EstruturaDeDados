/*

       Programa para exemplificar a aritmética e comparação de ponteiros
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
    p2 = p1;  //p2 aponta para o mesmo endereço apontado por p1
              //então p2 aponta para x

    p3 = &y;
    p4 = &z;

    //os dois printfs abaixo devem mostrar o endereço da variável x
    printf("\nendereco apontado por p1: %X", p1);
    printf("\nendereco apontado por p2: %X", p2);

    //os dois printfs abaixo devem mostrar os endereços das variáveis y e z, respectivamente
    printf("\nendereco apontado por p3: %X", p3);
    printf("\nendereco apontado por p4: %X", p4);


    //mostra o valor de x, y e z e repete esses valores através dos ponteiros
    //o * nos ponteiros faz com que o valor armazenado na variável apontada por
    //eles seja exibido
    printf("\nValor de x: %d", x);
    printf("\nValor de y: %c", y);
    printf("\nValor de z: %c", z);
    printf("\nValor de x (p1): %d", *p1);
    printf("\nValor de x (p2): %d", *p2);
    printf("\nValor de y (p3): %c", *p3);
    printf("\nValor de z (p4): %c", *p4);


    //comparação entre ponteiros
    //compara se p3 e p4 apontam para o mesmo endereço
    if(p3 == p4)
      printf("\nP3 e P4 apontam para o mesmo endereco");
    else
      printf("\nP3 e P4 NAO apontam para o mesmo endereco");


    //p4 aponta para o próximo endereço de memória considerando o seu tipo base
    //como p4 aponta para um char, e o tamanho do tipo char é 1 byte,
    //e ainda cada endereço de memória armazena 1 byte, então p4 aponta para o
    //endereço de memória imediatamente depois do seu
    //o mesmo vale para o decremento
    p4++;
    printf("\n\n\Novo endereco apontado por p4: %X", p4);
    printf("\nNovo valor apontado por p4: %c", *p4);

    //em outras situações, o ponteiro poderia ter como tipo base, por exemplo,
    //o tipo inteiro (int), o que faria com que seu incremento e decremento
    //fosse de 4 bytes

    //vale lembrar que esses valores de incremento estão diretamente relacionados
    //com a arquitetura do computador onde o programa será executado.
    //arquiteturas diferentes podem ter tipos base com tamanhos diferentes


    //nova comparação para saber se p3 e p4 apontam para o mesmo endereço
    if(p3 == p4)
      printf("\nP3 e P4 apontam para o mesmo endereco\n\n\n");
    else
      printf("\nP3 e P4 NAO apontam para o mesmo endereco\n\n\n");



    system("pause");
    return 0;
}
