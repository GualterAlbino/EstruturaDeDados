#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int vet_alunos[5];
    int vet_desvio[5];
    int vet_quadrado[5];
    int i;
    int soma=0;
    int soma_quadrado=0;
    int media;
    int media_quadrado;
    int desvio;
    int desvio_quadrado;
    float variancia;
    float desvio_padrao;


    for(i=0;i<5;i++){
        cout<< "Qual a nota do aluno "<<i<<": ";
        cin>>vet_alunos[i];

        soma=soma+vet_alunos[i];
        media=soma/5;
        desvio=vet_alunos[i]-media;
        vet_desvio[i]=desvio;

        soma_quadrado=soma_quadrado+(vet_alunos[i]*vet_alunos[i]);
        media_quadrado=soma_quadrado/5;
        desvio_quadrado=vet_alunos[i]-media_quadrado;
        vet_quadrado[i]=desvio_quadrado;

        variancia=((vet_alunos[0]- media)*(vet_alunos[0]- media))+((vet_alunos[1]- media)*(vet_alunos[1]- media))
        +((vet_alunos[2]- media)*(vet_alunos[2]- media))+((vet_alunos[3]- media)*(vet_alunos[3]- media))+
        ((vet_alunos[4]- media)*(vet_alunos[4]- media))/5;

        desvio_padrao=sqrt(variancia);


    }
        cout<< "\n\n";
        cout<< "A variancia e: "<< variancia<<"\n";
        cout<< "O desvio padrao e: "<< desvio_padrao<<"\n";
        cout<< desvio_quadrado;



    cout << endl;
    return 0;
}
