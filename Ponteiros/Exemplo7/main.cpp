/*

       Programa para exemplificar o uso de Matrizes de ponteiros
*/


//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>


//Função que recebe um ponteiro para uma string e a imprime na tela
void MostraString(char *s){

     printf("String: ");


     while(*s){  //enquanto existir carácter na string

       printf("%c", *s);  //imprime o carácter atual da string apontando pelo ponteiro
       s++;  //avança o ponteiro para o próximo carácter da string
     }

     //pode-se também imprimir com printf
     //repare que não há o * antes do s, pois o "%s" já trata isso
       //printf("%s", s);

     printf("\n");
}


//função que recebe um vetor de ponteiros para números e os imprime na tela
void MostraNumeros(int *num[])
{

   //imprime os números que são referenciados pelo vetor de ponteiros
   for(int i=0; i<3; i++){

     //repare que neste caso é necessário utilizar o * antes de num[i]
     printf("Posicao (%d) numero (%d)", i, *num[i]);

     printf("\n");
   }

     printf("\n\n");
}

int main()
{

   char *str[3];  //declaração de um vetor de ponteiros para strings (matriz com 3 ponteiros)
   int *num[3];   //declaração de um vetor de ponteiros para números (matriz com 3 ponteiros)
   int x = 10, y = 20, z = 30;

   num[0] = &x;   //primeiro ponteiro do vetor de ponteiros de números aponta para a variável x
   num[1] = &y;   //segundo ponteiro do vetor de ponteiros de números aponta para a variável y
   num[2] = &z;   //terceiro ponteiro do vetor de ponteiros de números aponta para a variável z


   str[0]= "Ola";  //primeiro ponteiro do vetor de ponteiros de strings aponta para a string "Ola" (Alocada na memória)
   str[1]= "Oi";    //segundo ponteiro do vetor de ponteiros de strings aponta para a string "Oi" (Alocada na memória)
   str[2]= "Hello"; //terceiro ponteiro do vetor de ponteiros de strings aponta para a string "Hello" (Alocada na memória)

   //chamada para as funções que imprimem as strings do vetor de ponteiros para strings
   //as funções recebem o ponteiro direto para a string e a imprime
   MostraString(str[0]);
   MostraString(str[1]);
   MostraString(str[2]);

   printf("\n\n");

   //chamada para a função que recebe o ponteiro para o vetor de ponteiros para números e imprime cada número
   MostraNumeros(num);

   system("pause");
   return 0;
}

