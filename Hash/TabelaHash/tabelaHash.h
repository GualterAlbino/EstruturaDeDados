#ifndef TABELAHASH_H_INCLUDED
#define TABELAHASH_H_INCLUDED
#include "noh.h"

class tabelaHash
{
private:

    noh **elementos;
    int capacidade;

public:
    tabelaHash(int cap);
    ~tabelaHash();
    void insere(int chave, int valor);
    int busca(int chave);
    int remover (int chave);
    void imprime ();
};

#endif // TABELAHASH_H_INCLUDED
