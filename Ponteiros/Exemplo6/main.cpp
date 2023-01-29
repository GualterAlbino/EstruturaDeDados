/*

       Programa para exemplificar a passagem de par�metros para fun��o
       atrav�s de matrizes e ponteiros
*/


#include <stdio.h>
#include <stdlib.h>

//Fun��o que recebe um vetor de char (string) e imprime na tela
void MostraStringVetor(char s[]){

     printf("String (Vetor): ");

     for(int i=0; s[i]; i++){ //para cada caracter do vetor
                              //se s[i] for igual a '\0', o teste retorna falso e sai do la�o

       printf("%c", s[i]); //imprime cada car�cter do vetor
     }

     printf("\n");
}

void MostraStringPonteiro(char *s){  //recebe uma string como ponteiro
                                     //Lembrando que um vetor (como na fun��o anterior)
                                     //tamb�m � um ponteiro para primeira posi��o
                                     //do vetor (primeiro caracter da string)

     printf("String  (Ponteiro): ");
     while(*s){  //enquanto n�o encontrar o fim de string '\0'

       printf("%c", *s);  //imprime o car�cter atual da string para o qual o ponteiro est� apontando
       s++;  //faz o ponteiro apontar para o pr�ximo car�cter da string (pula 1 byte)
     }

     printf("\n\n");
}

//imprime um determinado car�cter da string determinado pela vari�vel "pos"
void MostraCaracter(char *s, int pos){

     printf("\nCaracter %d: ", pos);  //posi��o solicitada

     printf("%c", *(s+pos));  //imprime o car�cter da string
                              //esse car�cter ser� determinado pela primeira posi��o
                              //da string apontanda apontada pelo ponteiro + o incremento
                              //determinado por pos
                              //Exemplo, para string "ABCD" e pos = 2, o ponteiro
                              //ir� apontar para "A" (posi��o 0).
                              //Com incremento de pos, o ponteiro ir� apontar para
                              //"C", e ser� impresso na tela

}

void MostraNumerosPonteiro(int *n, int quant){  //recebe um vetor de n�meros como ponteiro
                                                //e a quantidade de n�meros nesse vetor
                                                //Lembrando que um vetor tamb�m � um ponteiro
                                                //para primeira posi��o do vetor (primeiro n�mero do vetor)

     printf("\n\nNumeros (Ponteiro): ");

     for(int i = 0; i < quant; i++) {  //para cada posi��o do vetor

       printf("\n%d", *n);  //imprime o n�mero atual do vetor para o qual o ponteiro est� apontando
       n++;  //faz o ponteiro apontar para o pr�ximo inteiro do vetor (pula 4 bytes)
     }

     printf("\n\n");
}

int main()
{

   char str[] = "ola";  //Na mem�ria ser� armazenado o vetor com "ola"
                       //Ser� ent�o retornado o endere�o da primeira posi��o do vetor
                       //(indice zero - letra o) que ser� apontando pelo ponteiro str

   int num[3] = {1,2,3};

   MostraStringVetor(str);  //mostra a string utilizando vetor
   MostraStringPonteiro(str);  //mostra a string utilizando ponteiro

                               //a chamada das duas fun��es � a mesma, pois a matriz
                               //� na verdade um ponteiro e a segunda fun��o
                               //espera um ponteiro


   //fun��es que imprimem um determinado car�cter da string apontada por str
   MostraCaracter(str, 0);
   MostraCaracter(str, 1);
   MostraCaracter(str, 2);

   MostraNumerosPonteiro(num,3);

   printf("\n\n");
   system("pause");
   return 0;
}

