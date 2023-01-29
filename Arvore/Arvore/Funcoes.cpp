//Bibliotecas necess�rias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArvoreBinariaBusca.h"
#include "Funcoes.h"
#include <locale.h> //necess�rio para usar setlocale

using namespace std;


void alimentacao(){ //Fun��o para alimenta��o da Arvore.

    setlocale(LC_ALL, "Portuguese");//Permitir o uso de acentua��o
    int dado; //Variavel inteira usada para alimentar a arvore
    char op; //Variavel usada como resposta da continuidade da alimenta��o



     ///Fun��o para alimentar a arvore
    do{

        cout<<"Digite um dado para alimentar a arvore: ";
        cin>>dado;

        if(ArvoreBinariaBusca_Inserir(dado))
            cout << "Elemento inserido\n\n";
            else cout << "Erro ao inserir elemento.\n\n";

        cout<<"Deseja continuar? (S / N ): ";
        cin>>op;

        system("cls");

    }while(toupper(op) != 'N');



}
