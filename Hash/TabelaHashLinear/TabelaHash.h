#ifndef TABELAHASH_H_INCLUDED
#define TABELAHASH_H_INCLUDED
#include "Dados.h"
#define tam 7


class TabelaHash{


private:


    Dados* Tabela[tam] ; //Tabela de Dados onde serao quardados o elementos apartir de uma funçao de espalhamento a Funçao hash.



public:

    int funcaoHash(int chave);//**/
    TabelaHash(); //**/
    bool insereHash(int chave);
    bool buscaHash(int chave,int &indice);
    void imprimeHash();
    bool removeHash(int chave,int &indice);
    int linear(int x,int i);







};
#endif // TABELAHASH_H_INCLUDED
