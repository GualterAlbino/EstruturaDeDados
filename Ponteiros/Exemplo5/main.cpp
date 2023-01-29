/*

       Programa para exemplificar a passagem de parâmetros para função
       através de cópia, referência e ponteiro
*/

#include <stdio.h>
#include <stdlib.h>


//função que recebe como parâmetros "z" por referência e "w" por cópia
void ZreferenciaWcopia(int &z, int w)
{
     z=20; //passagem por referência altera o valor da variável original
           //passada como parâmetro.
     w++;  //passagem por cópia cria uma cópia da variável passada como parâmetro
           //Como resultado, a variável original passada como parâmetro não
           //será modificada
}


//função que recebe como parâmetros "z" utilizando um ponteiro e "w" por cópia
//essa passagem através de ponteiro no fim terá o mesmo resultado da passagem
//por referência
void ZponteiroWcopia(int *z, int w)
{
     *z=10; //modifica o valor da variável passada como parâmetro que é apontanda por p
     w++;
}


int main()
{
   int x, y=1;

   //chamada da função passa x ( por referência) e y por cópia
   ZreferenciaWcopia(x,y);
   printf("\nx = %d \ny = %d\n\n\n", x, y);  //deve imprimir o x = 20 e y = 1
                                             //z=20 foi realizado na função ZreferenciaWcopia
                                             //y=1 foi realizado no próprio main, e não sofre
                                             //a modificação w++ realizada na função ZreferenciaWcopia

   //como o primeiro parâmetro da função é um ponteiro, deve-se passar o endereço (&) da variável que será apontada
   //lembrando que os dois [a variável e o ponteiro] devem ser do mesmo tipo
   //y é passado por cópia
   ZponteiroWcopia(&x,y);

   printf("x = %d \ny = %d\n\n\n", x, y); //deve imprimir o x = 10 e y = 1
                                          //*z=10 foi realizado na função ZponteiroWcopia
                                          //y=1 foi realizado no próprio main, e não sofre
                                          //a modificação w++ realizada na função ZponteiroWcopia

   system("pause");

   return 0;
}
