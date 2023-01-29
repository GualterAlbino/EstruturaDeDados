//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"



TipoCelula *Frente, *Tras;
TipoCelula *Frente2, *Tras2;
TipoCelula *Frente3, *Tras3;

int Contador;
int Contador2;
int Contador3;

void Lista_Construtor()
{


  Frente = Tras = NULL;
  Contador = 0;
}

void Lista2_Construtor()
{



  Frente2 = Tras2 = NULL;
  Contador2 = 0;
}

void Lista3_Construtor()
{



  Frente3 = Tras3 = NULL;
  Contador3 = 0;
}

void Lista_Destrutor()
{


   TipoCelula *Temp;

   while(Frente != NULL)
   {
     Temp = Frente;
     Frente = Frente -> Prox;

     Temp->Prox = NULL;
     free(Temp);
   }

   Tras = NULL;
   Contador = 0;
}

void Lista2_Destrutor()
{


   TipoCelula *Temp2;

   while(Frente2 != NULL)
   {
     Temp2 = Frente2;
     Frente2 = Frente2 -> Prox;

     Temp2->Prox = NULL;
     free(Temp2);
   }

   Tras2 = NULL;
   Contador2 = 0;
}

void Lista3_Destrutor()
{


   TipoCelula *Temp3;

   while(Frente3 != NULL)
   {
     Temp3 = Frente3;
     Frente3 = Frente3 -> Prox;

     Temp3->Prox = NULL;
     free(Temp3);
   }

   Tras3 = NULL;
   Contador3 = 0;
}



bool Lista_Vazia()
{

   return Tras == NULL;
}

bool Lista2_Vazia()
{

   return Tras2 == NULL;
}

bool Lista3_Vazia()
{

   return Tras3 == NULL;
}


int Lista_Tamanho()
{
    return Contador;
}

int Lista2_Tamanho()
{
    return Contador2;
}

int Lista3_Tamanho()
{
    return Contador3;
}


bool Lista_Inserir_Fim(int Elemento)
{

   TipoCelula *Novo;

   if((Novo = (TipoCelula *) malloc(sizeof(TipoCelula)))==NULL)
   {

       return false;
   }
   else
   {
          Novo->Item = Elemento;
          Novo->Prox = NULL;

          if(Lista_Vazia())
            Frente = Novo;
          else Tras->Prox = Novo;


          Tras = Novo;
          Contador++;

          return true;
   }
}

bool Lista2_Inserir_Fim(int Elemento)
{

   TipoCelula *Novo2;

   if((Novo2 = (TipoCelula *) malloc(sizeof(TipoCelula)))==NULL)
   {

       return false;
   }
   else
   {
          Novo2->Item = Elemento;
          Novo2->Prox = NULL;

          if(Lista2_Vazia())
            Frente2 = Novo2;
          else Tras2->Prox = Novo2;


          Tras2 = Novo2;
          Contador2++;

          return true;
   }
}

bool Lista3_Inserir_Fim(int Elemento)
{

   TipoCelula *Novo3;

   if((Novo3 = (TipoCelula *) malloc(sizeof(TipoCelula)))==NULL)
   {

       return false;
   }
   else
   {
          Novo3->Item = Elemento;
          Novo3->Prox = NULL;

          if(Lista3_Vazia())
            Frente3 = Novo3;
          else Tras3->Prox = Novo3;


          Tras3 = Novo3;
          Contador3++;

          return true;
   }
}


bool Lista_Remover_Fim(int &Elemento)
{

     if(!Lista_Vazia()){

       TipoCelula *Temp = Frente;

       if(Frente == Tras){

          Elemento = Tras->Item;
          Contador--;
          free(Tras);
          Frente = Tras = NULL;
          return true;
       }

       while(Temp->Prox != Tras){

            Temp = Temp->Prox;
       }


        Elemento = Tras->Item;
        Tras = Temp;
        Temp = Temp->Prox;
        Tras->Prox = NULL;

        free(Temp);
        Contador--;

        return true;
     }
     else
       return false;
}

bool Lista2_Remover_Fim(int &Elemento)
{

     if(!Lista2_Vazia()){

       TipoCelula *Temp2 = Frente2;

       if(Frente2 == Tras2){

          Elemento = Tras2->Item;
          Contador2--;
          free(Tras2);
          Frente2 = Tras2 = NULL;
          return true;
       }

       while(Temp2->Prox != Tras2){

            Temp2 = Temp2->Prox;
       }


        Elemento = Tras2->Item;
        Tras2 = Temp2;
        Temp2 = Temp2->Prox;
        Tras2->Prox = NULL;

        free(Temp2);
        Contador2--;

        return true;
     }
     else
       return false;
}

bool Lista3_Remover_Fim(int &Elemento)
{

     if(!Lista3_Vazia()){

       TipoCelula *Temp3 = Frente3;

       if(Frente3 == Tras3){

          Elemento = Tras3->Item;
          Contador3--;
          free(Tras3);
          Frente3 = Tras3 = NULL;
          return true;
       }

       while(Temp3->Prox != Tras3){

            Temp3 = Temp3->Prox;
       }


        Elemento = Tras3->Item;
        Tras3 = Temp3;
        Temp3 = Temp3->Prox;
        Tras3->Prox = NULL;

        free(Temp3);
        Contador3--;

        return true;
     }
     else
       return false;
}







bool Lista_BuscarPeloElemento(int Elemento, int &Posicao){


     TipoCelula *Temp = Frente;
     int i = 0;

     if(!Lista_Vazia()){

        while(Temp != NULL && Temp->Item != Elemento){

           i++;
           Temp = Temp->Prox;
        }

        if(Temp != NULL){

          Posicao = i;
          return true;
        }
        else
          return false;
     }
     else
        return false;
}





