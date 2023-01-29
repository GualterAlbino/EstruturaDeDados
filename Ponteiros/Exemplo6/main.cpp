/*

       Programa para exemplificar a passagem de parâmetros para função
       através de matrizes e ponteiros
*/


#include <stdio.h>
#include <stdlib.h>

//Função que recebe um vetor de char (string) e imprime na tela
void MostraStringVetor(char s[]){

     printf("String (Vetor): ");

     for(int i=0; s[i]; i++){ //para cada caracter do vetor
                              //se s[i] for igual a '\0', o teste retorna falso e sai do laço

       printf("%c", s[i]); //imprime cada carácter do vetor
     }

     printf("\n");
}

void MostraStringPonteiro(char *s){  //recebe uma string como ponteiro
                                     //Lembrando que um vetor (como na função anterior)
                                     //também é um ponteiro para primeira posição
                                     //do vetor (primeiro caracter da string)

     printf("String  (Ponteiro): ");
     while(*s){  //enquanto não encontrar o fim de string '\0'

       printf("%c", *s);  //imprime o carácter atual da string para o qual o ponteiro está apontando
       s++;  //faz o ponteiro apontar para o próximo carácter da string (pula 1 byte)
     }

     printf("\n\n");
}

//imprime um determinado carácter da string determinado pela variável "pos"
void MostraCaracter(char *s, int pos){

     printf("\nCaracter %d: ", pos);  //posição solicitada

     printf("%c", *(s+pos));  //imprime o carácter da string
                              //esse carácter será determinado pela primeira posição
                              //da string apontanda apontada pelo ponteiro + o incremento
                              //determinado por pos
                              //Exemplo, para string "ABCD" e pos = 2, o ponteiro
                              //irá apontar para "A" (posição 0).
                              //Com incremento de pos, o ponteiro irá apontar para
                              //"C", e será impresso na tela

}

void MostraNumerosPonteiro(int *n, int quant){  //recebe um vetor de números como ponteiro
                                                //e a quantidade de números nesse vetor
                                                //Lembrando que um vetor também é um ponteiro
                                                //para primeira posição do vetor (primeiro número do vetor)

     printf("\n\nNumeros (Ponteiro): ");

     for(int i = 0; i < quant; i++) {  //para cada posição do vetor

       printf("\n%d", *n);  //imprime o número atual do vetor para o qual o ponteiro está apontando
       n++;  //faz o ponteiro apontar para o próximo inteiro do vetor (pula 4 bytes)
     }

     printf("\n\n");
}

int main()
{

   char str[] = "ola";  //Na memória será armazenado o vetor com "ola"
                       //Será então retornado o endereço da primeira posição do vetor
                       //(indice zero - letra o) que será apontando pelo ponteiro str

   int num[3] = {1,2,3};

   MostraStringVetor(str);  //mostra a string utilizando vetor
   MostraStringPonteiro(str);  //mostra a string utilizando ponteiro

                               //a chamada das duas funções é a mesma, pois a matriz
                               //é na verdade um ponteiro e a segunda função
                               //espera um ponteiro


   //funções que imprimem um determinado carácter da string apontada por str
   MostraCaracter(str, 0);
   MostraCaracter(str, 1);
   MostraCaracter(str, 2);

   MostraNumerosPonteiro(num,3);

   printf("\n\n");
   system("pause");
   return 0;
}

