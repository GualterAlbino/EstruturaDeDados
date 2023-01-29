//Bibliotecas necessárias
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArvoreBinariaBusca.h"
#include "Funcoes.h"
#include <locale.h> //necessário para usar setlocale

using namespace std;


void alimentacao(){ //Função para alimentação da Arvore.

    setlocale(LC_ALL, "Portuguese");//Permitir o uso de acentuação
    int dado; //Variavel inteira usada para alimentar a arvore
    char op; //Variavel usada como resposta da continuidade da alimentação



     ///Função para alimentar a arvore
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
