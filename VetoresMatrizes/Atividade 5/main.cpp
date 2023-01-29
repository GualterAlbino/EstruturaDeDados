#include <iostream>

using namespace std;

int main()
{
    int vet1[10];
    int vet2[10];
    int i;
    int mult;
    int soma;

    for(i=0;i<10;i++){
        cout<<"Digite o numero "<<i<<" do vetor: ";
        cin>>vet1[i];
        if(i%2==0){
            vet2[i]=vet1[i]*5;
        }else{
            vet2[i]=vet1[i]+5;
        }
    }
    cout<<"\n\n\n";

    for(i=0;i<10;i++){
        cout<<"|"<<vet1[i]<<"|";
    }

    cout<<"\n\n\n";

    for(i=0;i<10;i++){
        cout<<"|"<<vet2[i]<<"|";
    }

    cout << endl;
    return 0;
}
