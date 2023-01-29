#include <iostream>

using namespace std;

int main()
{
   int quant_elementos;
   int i;
   int maior1=0;
   int maior2=0;
   int soma=0;

    int vet[10];

    cout << "Quantos elementos deseja? ";
    cin >> quant_elementos;

    for(i=0;i<quant_elementos;i++){
        cout << "Digite um valor: ";
        cin >>vet[i];

            if (vet[i]> maior1){
                maior2=maior1;
                maior1=vet[i];
        }

            if ((i%2==1)&&(vet[i]%2==0)){
            soma=soma+vet[i];
        }
    }


    cout << "\nMaior elemento e: "<<maior1;
    cout << "\nSegundo maior e: "<<maior2;
    cout << "\nA soma dos elementos pares em posicoees impares e: "<<soma;




    cout << endl;
    return 0;
}
