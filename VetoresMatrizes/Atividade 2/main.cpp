#include <iostream>

using namespace std;



int main()
{
    int vet1[5];
    float vet2[5];
    float vet3[5];
    int i;
    float somaT=0;//soma total
    float somaI=0;//soma individual

    for(i=0;i<5;i++){

        cout << "Quantidade do produto " << i <<": ";
        cin >> vet1[i];
        cout << "Valor do produto: ";
        cin >> vet2[i];
        cout << "\n";
    }

     cout << "\n\n\n";

    for (i=0;i<5;i++){

        somaI=vet1[i]*vet2[i];
        vet3[i]=somaI;
        somaT=somaT + vet3[i];
        cout << "O valor a ser pago do produto " << i << " e: " <<vet3[i] <<"\n";
        vet1[i]++;
        vet2[i]++;
        vet3[i]++;
    }

    cout << "E a soma total e: "<< somaT;
    cout << "\n\n\n";

    cout << endl;
    return 0;
}
