/*

       Programa para exemplificar a passagem de par�metros para fun��o
       atrav�s de c�pia, refer�ncia e ponteiro
*/

#include <stdio.h>
#include <stdlib.h>


//fun��o que recebe como par�metros "z" por refer�ncia e "w" por c�pia
void ZreferenciaWcopia(int &z, int w)
{
     z=20; //passagem por refer�ncia altera o valor da vari�vel original
           //passada como par�metro.
     w++;  //passagem por c�pia cria uma c�pia da vari�vel passada como par�metro
           //Como resultado, a vari�vel original passada como par�metro n�o
           //ser� modificada
}


//fun��o que recebe como par�metros "z" utilizando um ponteiro e "w" por c�pia
//essa passagem atrav�s de ponteiro no fim ter� o mesmo resultado da passagem
//por refer�ncia
void ZponteiroWcopia(int *z, int w)
{
     *z=10; //modifica o valor da vari�vel passada como par�metro que � apontanda por p
     w++;
}


int main()
{
   int x, y=1;

   //chamada da fun��o passa x ( por refer�ncia) e y por c�pia
   ZreferenciaWcopia(x,y);
   printf("\nx = %d \ny = %d\n\n\n", x, y);  //deve imprimir o x = 20 e y = 1
                                             //z=20 foi realizado na fun��o ZreferenciaWcopia
                                             //y=1 foi realizado no pr�prio main, e n�o sofre
                                             //a modifica��o w++ realizada na fun��o ZreferenciaWcopia

   //como o primeiro par�metro da fun��o � um ponteiro, deve-se passar o endere�o (&) da vari�vel que ser� apontada
   //lembrando que os dois [a vari�vel e o ponteiro] devem ser do mesmo tipo
   //y � passado por c�pia
   ZponteiroWcopia(&x,y);

   printf("x = %d \ny = %d\n\n\n", x, y); //deve imprimir o x = 10 e y = 1
                                          //*z=10 foi realizado na fun��o ZponteiroWcopia
                                          //y=1 foi realizado no pr�prio main, e n�o sofre
                                          //a modifica��o w++ realizada na fun��o ZponteiroWcopia

   system("pause");

   return 0;
}
