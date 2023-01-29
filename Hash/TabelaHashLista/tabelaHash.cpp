#include "tabelaHash.h"

using namespace std;

const int UMPRIMO = 37;

int funcaoHash(int s, int M) {

    long h = 0;
    //for (int i = 0; i < s ; i++) {
        h = (UMPRIMO + s) % M;
    //}
    return h;
}

tabelaHash::tabelaHash(int cap){

    elementos = new noh*[cap];
    capacidade = cap;
    for (int i = 0; i < cap; i++){
        elementos[i] = NULL;
    }
}

tabelaHash::~tabelaHash(){

    for (int i = 0; i < capacidade; ++i){
        noh* atual = elementos[i];
        while(atual != NULL){
            noh* aux = atual;
            atual = atual->proximo;
            delete aux;
        }
    }
    delete[] elementos;
}

void tabelaHash::insere(int chave){

    int hash = funcaoHash(chave,capacidade);
    if (busca(chave) == -1){

        if (elementos[hash] == NULL){
            elementos[hash] = new noh;
            elementos[hash]->chave = chave;
            cout <<  "\n\nValor adicionado" << endl;

        }else{
            cout << "\n\nCOLIDIU " << endl;
            noh* atual = elementos[hash];
            while(atual->proximo != NULL){
                atual = atual->proximo;
            }
            noh* novo = new noh;
            novo->chave = chave;
            atual->proximo = novo;
            cout <<  "\n\nValor adicionado" << endl;
        }
    }else{
        cout <<  "\n\nJA EXISTE ESSE VALOR NA TABELA" << endl;
    }
}

int tabelaHash::busca(int chave){

    int hash = funcaoHash(chave,capacidade);
    if (elementos[hash] != NULL && elementos[hash]->chave == chave){
        return elementos[hash]->chave;
    }else{
        noh* atual = elementos[hash];

        while (atual != NULL && atual->chave != chave){
            atual = atual->proximo;
        }

        if (atual != NULL && atual->chave == chave){
            return atual->chave;
        }else{
            return -1;
        }
    }
}

int tabelaHash::remover(int chave){

    int hash = funcaoHash(chave,capacidade);
    if (elementos[hash] != NULL && elementos[hash]->chave == chave){
        noh* aux = elementos[hash];
        elementos[hash] = elementos[hash]->proximo;
        delete aux;
    } else {
        noh* atual = elementos[hash];
        noh* anterior;
        while (atual != NULL && atual->chave != chave){
            anterior = atual;
            atual = atual->proximo;
        }
        if (atual != NULL && atual->chave == chave){
            anterior->proximo = atual->proximo;
            delete atual;
        } else {
            return -1;
        }
    }
}

void tabelaHash::imprime(){

    noh* atual;
    cout << "-----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < capacidade; ++i){
        cout << "Hash " << i << ":";
        atual = elementos[i];
        while (atual != NULL){
            cout << " Valor: [" << atual->chave << "] --> ";
            atual = atual->proximo;
        }
        cout << " NULL" << endl;
    }
    cout << "-----------------------------------------------------------------------------" << endl;
}
