/*

       Programa para exemplificar o uso de Matrizes de ponteiros
*/


//Bibliotecas necess�rias
#include <stdio.h>
#include <stdlib.h>


//Fun��o que recebe um ponteiro para uma string e a imprime na tela
void MostraString(char *s){

     printf("String: ");


     while(*s){  //enquanto existir car�cter na string

       printf("%c", *s);  //imprime o car�cter atual da string apontando pelo ponteiro
       s++;  //avan�a o ponteiro para o pr�ximo car�cter da string
     }

     //pode-se tamb�m imprimir com printf
     //repare que n�o h� o * antes do s, pois o "%s" j� trata isso
       //printf("%s", s);

     printf("\n");
}


//fun��o que recebe um vetor de ponteiros para n�meros e os imprime na tela
void MostraNumeros(int *num[])
{

   //imprime os n�meros que s�o referenciados pelo vetor de ponteiros
   for(int i=0; i<3; i++){

     //repare que neste caso � necess�rio utilizar o * antes de num[i]
     printf("Posicao (%d) numero (%d)", i, *num[i]);

     printf("\n");
   }

     printf("\n\n");
}

int main()
{

   char *str[3];  //declara��o de um vetor de ponteiros para strings (matriz com 3 ponteiros)
   int *num[3];   //declara��o de um vetor de ponteiros para n�meros (matriz com 3 ponteiros)
   int x = 10, y = 20, z = 30;

   num[0] = &x;   //primeiro ponteiro do vetor de ponteiros de n�meros aponta para a vari�vel x
   num[1] = &y;   //segundo ponteiro do vetor de ponteiros de n�meros aponta para a vari�vel y
   num[2] = &z;   //terceiro ponteiro do vetor de ponteiros de n�meros aponta para a vari�vel z


   str[0]= "Ola";  //primeiro ponteiro do vetor de ponteiros de strings aponta para a string "Ola" (Alocada na mem�ria)
   str[1]= "Oi";    //segundo ponteiro do vetor de ponteiros de strings aponta para a string "Oi" (Alocada na mem�ria)
   str[2]= "Hello"; //terceiro ponteiro do vetor de ponteiros de strings aponta para a string "Hello" (Alocada na mem�ria)

   //chamada para as fun��es que imprimem as strings do vetor de ponteiros para strings
   //as fun��es recebem o ponteiro direto para a string e a imprime
   MostraString(str[0]);
   MostraString(str[1]);
   MostraString(str[2]);

   printf("\n\n");

   //chamada para a fun��o que recebe o ponteiro para o vetor de ponteiros para n�meros e imprime cada n�mero
   MostraNumeros(num);

   system("pause");
   return 0;
}

