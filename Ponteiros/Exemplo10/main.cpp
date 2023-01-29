/*

    Exemplo para demonstrar um problema ao utilizar um ponteiro

*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int x, *p;

    x = 10;

    //na seguinte linha temos um problema de ponteiro n�o inicializado
    //� atribu�do o valor 10 � um endere�o desconhecido de mem�ria apontado por p
    //para corrigir o problema a linha seguinte deveria ser: p = &x;
    *p = x;

    //� sempre importante tomar cuidado para que um ponteiro n�o aponte para
    //um endere�o de mem�ria desconhecido, o que pode sobrescrever dados ou at�
    //mesmo o c�digo do pr�prio programa


    printf("Valor de p: %d\n", *p);


    system("pause");
    return 0;
}
