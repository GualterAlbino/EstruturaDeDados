#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nome1[51];
    char nome2[51];

    cout<<"Digite um nome: ";
    gets(nome1);
    cout<<"Digite outro nome: ";
    gets(nome2);
    cout<<"\n\n";
        if(strcasecmp(nome1,nome2)==0){
            cout<<"Os nomes sao lexicograficamente iguais\n";
        }else if(strcasecmp(nome1,nome2)>0){
            cout<<"O nome "<<nome2<<" e lexicograficamente menor\n";

        }else if (strcasecmp(nome1,nome2)<0){
            cout<<"O nome "<<nome1<<" e lexicograficamente menor\n";

        }



    cout << endl;
    return 0;
}
