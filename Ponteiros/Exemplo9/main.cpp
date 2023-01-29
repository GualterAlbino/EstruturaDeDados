/*

        Programa para exemplificar aloca��o din�mica de mem�ria

        Nesse programa o usu�rio pode informar a quantidade de n�meros que
        deseja informar e somente o espa�o necess�rio � alocado na forma de vetor
*/


//Bibliotecas necess�rias
#include <stdio.h>
#include <stdlib.h>

//fun��o para solicitar dados (n�meros) ao usu�rio
//o espa�o de mem�ria utilizado pelo vetor j� foi previamente alocado
//� passado como argumento para a fun��o o ponteiro para o vetor e a quantidade
//de dados a serem solicitados ao usu�rio
void CarregaVetor(int *p, int quant){


   for(int i = 0; i < quant; i++){

      printf("Digite o numero: ");
      scanf("%d", &*p); //faz a leitura do n�mero digitado pelo usu�rio e o armazena
                        //no vetor na posi��o atual apontanda pelo ponteiro

                        //O Scanf tamb�m poderia ser feito da seguinte maneira: scanf("%d", p);
                        //O resultado � o mesmo, pois Scanf recebe um endere�o de mem�ria para escrever os dados
                        //e esse endere�o est� de fato armazenado no ponteiro.

      p++;  //avan�a o ponteiro para a pr�xima posi��o
   }
}


//fun��o para imprimir os n�meros digitados pelo usu�rio na fun��o CarregaVetor
//� passado como argumento para a fun��o o ponteiro para o vetor e a quantidade
//de dados a serem impressos na tela
void ImprimeVetor(int *p, int quant){

   printf("\n\n");
   for(int i = 0; i < quant; i++){

      printf("Numero digitado: %d\n", *p);  //imprime na tela o n�mero armazenado
                                            //no vetor na posi��o atual apontanda pelo ponteiro
      p++;  //avan�a o ponteiro para a pr�xima posi��o
   }
}

int main()
{

   int *p, quant;  //ponteiro a ser utilizado para apontar para o espa�o de mem�ria a ser alocado
                   //quant armazena a quantidade de n�meros a serem informados pelo usu�rio

   printf("Quantos valores deseja armazenar?");
   scanf("%d", &quant);  //faz a leitura de quantos valores o usu�rio deseja armazenar

   p = (int*) malloc(sizeof(int) * quant);  //malloc - Memory Allocation
                                            //malloc aloca uma quantidade de mem�ria
                                            //e retorna um ponteiro para esse endere�o

                                            //malloc retorna um ponteiro gen�rico (void*)
                                            //que pode ser transformado para qualquer tipo de ponteiro
                                            //por isso, a convers�o expl�cita (casting)
                                            //para o ponteiro do tipo inteiro (int*)

                                            //a quantidade de mem�ria em bytes a ser alocada
                                            //� passada como par�metro para a fun��o malloc.
                                            //sizeof(int) retorna o tamanho de cada inteiro
                                            //e como deseja-se armazenar um vetor de inteiros
                                            //multiplica-se por quant (sizeof(int) * quant)

   if(p==NULL){  //se n�o foi poss�vel alocar a mem�ria atrav�s de malloc, o ponteiro ir� apontar para nulo

      printf("Erro. Falta de memoria");   //o que indica falta de mem�ria
      exit(1);  //termina o programa
   }


   CarregaVetor(p, quant);  //solicita (quant) n�meros ao usu�rio e carrega no vetor apontado por p
   ImprimeVetor(p, quant);  //apresenta os n�meros informados pelo usu�rio

   free(p);   //libera o espa�o de mem�ria alocado previamente com malloc
              //o argumento dessa fun��o � o ponteiro para a mem�ria alocada
   printf("\n\n");

   return 0;
}
