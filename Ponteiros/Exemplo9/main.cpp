/*

        Programa para exemplificar alocação dinâmica de memória

        Nesse programa o usuário pode informar a quantidade de números que
        deseja informar e somente o espaço necessário é alocado na forma de vetor
*/


//Bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>

//função para solicitar dados (números) ao usuário
//o espaço de memória utilizado pelo vetor já foi previamente alocado
//É passado como argumento para a função o ponteiro para o vetor e a quantidade
//de dados a serem solicitados ao usuário
void CarregaVetor(int *p, int quant){


   for(int i = 0; i < quant; i++){

      printf("Digite o numero: ");
      scanf("%d", &*p); //faz a leitura do número digitado pelo usuário e o armazena
                        //no vetor na posição atual apontanda pelo ponteiro

                        //O Scanf também poderia ser feito da seguinte maneira: scanf("%d", p);
                        //O resultado é o mesmo, pois Scanf recebe um endereço de memória para escrever os dados
                        //e esse endereço está de fato armazenado no ponteiro.

      p++;  //avança o ponteiro para a próxima posição
   }
}


//função para imprimir os números digitados pelo usuário na função CarregaVetor
//É passado como argumento para a função o ponteiro para o vetor e a quantidade
//de dados a serem impressos na tela
void ImprimeVetor(int *p, int quant){

   printf("\n\n");
   for(int i = 0; i < quant; i++){

      printf("Numero digitado: %d\n", *p);  //imprime na tela o número armazenado
                                            //no vetor na posição atual apontanda pelo ponteiro
      p++;  //avança o ponteiro para a próxima posição
   }
}

int main()
{

   int *p, quant;  //ponteiro a ser utilizado para apontar para o espaço de memória a ser alocado
                   //quant armazena a quantidade de números a serem informados pelo usuário

   printf("Quantos valores deseja armazenar?");
   scanf("%d", &quant);  //faz a leitura de quantos valores o usuário deseja armazenar

   p = (int*) malloc(sizeof(int) * quant);  //malloc - Memory Allocation
                                            //malloc aloca uma quantidade de memória
                                            //e retorna um ponteiro para esse endereço

                                            //malloc retorna um ponteiro genérico (void*)
                                            //que pode ser transformado para qualquer tipo de ponteiro
                                            //por isso, a conversão explícita (casting)
                                            //para o ponteiro do tipo inteiro (int*)

                                            //a quantidade de memória em bytes a ser alocada
                                            //é passada como parâmetro para a função malloc.
                                            //sizeof(int) retorna o tamanho de cada inteiro
                                            //e como deseja-se armazenar um vetor de inteiros
                                            //multiplica-se por quant (sizeof(int) * quant)

   if(p==NULL){  //se não foi possível alocar a memória através de malloc, o ponteiro irá apontar para nulo

      printf("Erro. Falta de memoria");   //o que indica falta de memória
      exit(1);  //termina o programa
   }


   CarregaVetor(p, quant);  //solicita (quant) números ao usuário e carrega no vetor apontado por p
   ImprimeVetor(p, quant);  //apresenta os números informados pelo usuário

   free(p);   //libera o espaço de memória alocado previamente com malloc
              //o argumento dessa função é o ponteiro para a memória alocada
   printf("\n\n");

   return 0;
}
