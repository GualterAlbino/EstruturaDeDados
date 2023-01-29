#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char string1[11];
    char string2[11];
    int i;

    cout<<"Digite um nome: ";
    gets(string1);
    cout<<"Digite outro nome: ";
    gets(string2);
    cout<<"\n\n";
    cout<<"String 1: "<<string1<<"\n";
    cout<<"String 2: "<<string2<<"\n";
    cout<<"\n\n";

    cout<<"Segunda letra do primero nome:";
    cout<<string1[1];

    cout<<"\n\n";

    cout<<"Penultima letra do segundo nome:";
    cout<<string2[(strlen(string2)-2)];







    cout << endl;
    return 0;
}
