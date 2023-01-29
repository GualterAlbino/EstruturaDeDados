#ifndef NOH_H_INCLUDED
#define NOH_H_INCLUDED
#include <iostream>

class noh
{
private:
    int chave;
    int valor;
    noh* proximo = NULL;

public:
    noh();
    ~noh();
    friend class tabelaHash;
};

#endif // NOH_H_INCLUDED
