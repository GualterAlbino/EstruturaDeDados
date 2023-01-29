
#include <iostream>
using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <list>
#include <conio.h>
#include "TabelaHash.h"


//

TabelaHash::TabelaHash()
{
    int i;
    for(i = 0; i < tam; i++)
    {
        Tabela[i] = NULL;
    }
}

int TabelaHash::funcaoHash(int item) // Funçao hash pega uma parte dos dados pra ser a chave
{                                    //onde sera feito uma funçao encima dessa chavc mod tamanho da tabela
    return (item*3 )%tam;            // que dara o indice onde os dados serao guardados
}


int TabelaHash::linear(int indice,int i) // a estrategia de colisao linear consiste em pegar o indice "indice" + o chaveero de tentativas "i"
 {                                       //  somar e devolver um novo indice onde sera feita uma nova tentativa.
    indice = (indice + i ) %tam ;
    return indice ;
}

bool TabelaHash::insereHash(int chave)
{
    int i = 0;
    int indice = funcaoHash(chave); // envia a chave e retorna o indice on sera guardado os dados.
    int nindice = indice ;

    if(Tabela[indice] == NULL)//verifica se o indice na tabela esta vazio.
    {
        Tabela[indice] = new Dados(); //aloca espaço na tabela para Dados.
        Tabela[indice]->Elemento = chave; //guarda o elemento
        Tabela[indice]->indice = indice;

        return true;
    }

    while(Tabela[nindice] != NULL && i != tam ) //caso houver colisao entra no while procurando por um espaço na tabela.
    {
        i ++;
        nindice = linear(indice,i); // untiliza a funçao linear para calcular um novo indice.

        if(Tabela[nindice] == NULL)
        {
            Tabela[nindice] = new Dados();//aloca espaço na tabela para Dados.
            Tabela[nindice]->Elemento = chave;//guarda o elemento
            Tabela[nindice]->indice = nindice;
            return true;
        }
    }
            return false;
}

bool TabelaHash::buscaHash(int chave,int &indi)
{
    int i = 0;
    int indice = funcaoHash(chave); // envia a chave e retorna o indice on sera guardado os dados.
    int nindice = indice;

    if(indice > tam || indice < 0) //verificaçao de segurança
    {
        cout << "\nPosicao nao encontrada!" << endl;
        return false;
    }

    while(i != tam)//procura o elemeto na tabela apartir do indice retornado
    {
        if(Tabela[nindice] != NULL && Tabela[nindice]->Elemento == chave)
        {
            indi = Tabela[nindice]->indice;
            return true;
        }

        i ++;
        nindice = linear(indice,i);
    }

    return false;

}

void TabelaHash::imprimeHash()
{
    for(int i = 0; i < tam; i++) //imprime elementos contidos na tabela e seus respectivos indices.
    {
        if(Tabela[i] != NULL)
        {
            cout << "Indice " << i << "  Valor : " <<Tabela[i]->Elemento << endl;
        }
    }
}

bool TabelaHash::removeHash(int chave,int &indi)
{
    int i = 0;
    int indice = funcaoHash(chave); // envia a chave e retorna o indice on sera guardado os dados.
    int nindice = indice;

    while(i != tam) //procura o elemeto na tabela apartir do indice retornado percorrendo toda a tabela caso o elemento nao seja encontrado.
    {
        if(Tabela[nindice] != NULL && Tabela[nindice]->Elemento == chave)
        {
            indi = Tabela[nindice]->indice;
            free(Tabela[nindice])   ;
            Tabela[nindice] = NULL  ;
            return true;
        }
        i ++;
        nindice = linear(indice,i);
    }
            return false;
}
