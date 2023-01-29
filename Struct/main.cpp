#include <iostream>
#include <string.h>

using namespace std;

struct alunos{

    char nome[101];
    int matricula;

};

alunos vetor[50];



int main()
{
    int quant_alunos;
    int i;

    cout<<"Quantos alunos para matricula? ";
    cin>>quant_alunos;
    cout<<"\n";

    for(i=0;i<quant_alunos;i++){
        cout<<"Digite o nome: ";
        cin>>vetor[i].nome;
        cout<<"Digite o numero de matricula: ";
        cin>>vetor[i].matricula;
        cout<<"\n";
    }

    for(i=0;i<quant_alunos;i++){
        cout<<"Numero de matricula "<<vetor[i].matricula<< "\n Nome: "<<vetor[i].nome;
    }


    cout << endl;
    return 0;
}

//usar while ao capturar strings para evitar problemas com usuario não digitar nada
/*While(strlen(string)!=0){
cin...
couy.....
--------------------
usar fflush(stdin) depois do gets para descarregar ba variavel */

