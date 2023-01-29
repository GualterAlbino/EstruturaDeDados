#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i;
    int contador=0;
    char palavra[11];
    char busca='a';

    cout<<"Digite uma palavra: ";
    gets(palavra);
    for(i=0;i<strlen(palavra);i++){
        if( 'a' == palavra[i]){
            contador++;
            palavra[i]='b';

        }
    }
    cout<<"\nExistem "<<contador<<" letras A";
    cout<<"\nDepois de substituir: "<<palavra;



    cout<< endl;
    return 0;
}
