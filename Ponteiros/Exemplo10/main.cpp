/*

    Exemplo para demonstrar um problema ao utilizar um ponteiro

*/


#include <stdio.h>
#include <stdlib.h>


int main(){

    int x, *p;

    x = 10;

    //na seguinte linha temos um problema de ponteiro não inicializado
    //é atribuído o valor 10 à um endereço desconhecido de memória apontado por p
    //para corrigir o problema a linha seguinte deveria ser: p = &x;
    *p = x;

    //É sempre importante tomar cuidado para que um ponteiro não aponte para
    //um endereço de memória desconhecido, o que pode sobrescrever dados ou até
    //mesmo o código do próprio programa


    printf("Valor de p: %d\n", *p);


    system("pause");
    return 0;
}
