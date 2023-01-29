#include <iostream>

using namespace std;

int main()
{
    int vet[5];
    int i;
    int soma=0;


    for(i=0;i<5;i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
            if(vet[i]%2==1){
                soma=soma+vet[i];
        }
    }

        cout << "\n" << "Soma dos imapares: "<< soma << "\n\n\n";


    cout << endl;
    return 0;
}
