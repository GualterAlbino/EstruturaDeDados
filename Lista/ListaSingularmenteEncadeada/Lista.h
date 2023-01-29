#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED


typedef int TipoDado; //Define o tipo de dado que será armazenado na Lista


struct TipoCelula{

   TipoDado Item;
   TipoCelula *Prox;
};


void Lista_Construtor();
void Lista2_Construtor();
void Lista3_Construtor();

void Lista_Destrutor();
void Lista2_Destrutor();
void Lista3_Destrutor();

bool Lista_Vazia();
bool Lista2_Vazia();
bool Lista3_Vazia();

int Lista_Tamanho();
int Lista2_Tamanho();
int Lista3_Tamanho();


bool Lista_Inserir_Fim(int Elemento);
bool Lista2_Inserir_Fim(int Elemento);
bool Lista3_Inserir_Fim(int Elemento);


bool Lista_Remover_Fim(int &Elemento);
bool Lista2_Remover_Fim(int &Elemento);
bool Lista3_Remover_Fim(int &Elemento);


bool Lista_Remover(int &Elemento, int Posicao);
bool Lista_Inicio(int &Elemento);
bool Lista_Fim(int &Elemento);
bool Lista_BuscarPeloElemento(int Elemento, int &Posicao);
bool Lista_BuscarPelaPosicao(int &Elemento, int Posicao);


#endif // LISTA_H_INCLUDED
