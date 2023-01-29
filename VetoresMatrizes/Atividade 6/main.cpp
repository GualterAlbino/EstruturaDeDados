#include <iostream>

using namespace std;

    int matriz1[20][25];
    int matriz2[25][20];
    int matriz3[20][25];
    int matriz4[20][25];
    int i;
    int j;
    int linha,coluna;
    int k;
    int op;

int menu(){



    cout<<"\t ------Menu-----\n\n\n";
    cout<<"1 - Calculo de matriz transposta\n";
    cout<<"2 - A multiplicacaoo da matriz por um fator K\n";
    cout<<"3 - Realizar a adicao com uma segunda matriz informada pelo usuario\n";
    cout<<"4 - Sair\n\n";
    cout<<"Seleciona uma opcao: ";
    cin>>op;

}
int matriz_transposta(){

    cout<<"Quantidade de linhas: ";
    cin>>linha;
    cout<<"Quantidade de colunas:";
    cin>>coluna;
    cout<<"\n\n\n";

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"Digite o numero da posicao ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    //========Matriz trasnposta========
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz2[i][j]=matriz1[j][i];

        }
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"|"<<matriz2[i][j]<<"|";

        }
    }

}

int matriz_multiplicada(){

    cout<<"Quantidade de linhas: ";
    cin>>linha;
    cout<<"Quantidadde de colunas: ";
    cin>>coluna;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"Digite o valor na posicao ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz1[i][j];

        }
    }
    cout<<"\n";
    cout<<"Digite o fator K: ";
    cin>>k;
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz3[i][j]=matriz1[i][j]*k;
        }
    }
    for(i=0;i<coluna;i++){
        for(j=0;j<coluna;j++){
            cout<<"|"<<matriz3[i][j]<<"|";
        }
    }



}

int matriz_adicao(){

    cout<<"Quantidade de linhas: ";
    cin>>linha;
    cout<<"Quantidadde de colunas: ";
    cin>>coluna;

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"Digite o valor na posicao ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }
    cout<<"\nSegunda matriz:\n";
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"Digite o valor na posicao ["<<i<<"] ["<<j<<"]: ";
            cin>>matriz3[i][j];

        }
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            matriz4[i][j]=(matriz1[i][j]+matriz3[i][j]);

        }
    }
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            cout<<"|"<<matriz4[i][j]<<"|";

        }
    }



}


int main()
{
    while(1){
    system("cls");
    menu();
    switch(op){

case 1:
    system("cls");
    matriz_transposta();
    break;
case 2:
    system("cls");
    matriz_multiplicada();
    break;

case 3:
    system("cls");
    matriz_adicao();
    break;

case 4:
    return 0;

default:
    cout<<"\nOpcao invalida! \n ";
        }
        cout<<"\n\n";
        system("pause");
    }



    cout << endl;
    return 0;
}
