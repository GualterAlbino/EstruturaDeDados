#ifndef ARVOREBINARIABUSCA_H_INCLUDED
#define ARVOREBINARIABUSCA_H_INCLUDED

typedef int TipoDado; //Define o tipo de dado que será armazenado na Árvore Binária de Busca


struct TipoCelulaArvore{

   TipoDado Item;
   TipoCelulaArvore *Esq, *Dir;
};


void ArvoreBinariaBusca_Construtor();
void ArvoreBinariaBusca_Destrutor();
bool ArvoreBinariaBusca_Vazia();
int  ArvoreBinariaBusca_Tamanho();
bool ArvoreBinariaBusca_Inserir(TipoDado Elemento);
bool ArvoreBinariaBusca_Pesquisar(TipoDado Elemento);
void ArvoreBinariaBusca_Percurso(int modo = 1);


void ArvoreBinariaBusca_Destrutor(TipoCelulaArvore *&Raiz);
bool ArvoreBinariaBusca_Inserir(TipoDado Elemento, TipoCelulaArvore *&Raiz);
bool ArvoreBinariaBusca_Pesquisar(TipoDado Elemento, TipoCelulaArvore *Raiz);
void ArvoreBinariaBusca_EmOrdem(TipoCelulaArvore *Raiz);
void ArvoreBinariaBusca_PreOrdem(TipoCelulaArvore *Raiz);
void ArvoreBinariaBusca_PosOrdem(TipoCelulaArvore *Raiz);


#endif // ARVOREBINARIABUSCA_H_INCLUDED
