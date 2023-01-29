#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    char cargo[15];
    float salario;
    float novo_salario;
    float diferenca;

    cout<<"Digite seu cargo: ";
    gets(cargo);
    cout<<"Digite seu salario: ";
    cin>>salario;


        if(strcasecmp(cargo,"Gerente")==0){
            novo_salario=((salario*10)/100)+salario;
            diferenca=novo_salario-salario;
            cout<<"\nSeu salario era de "<<salario<<" reais\n";
            cout<<"Com o aumento passou a ser de "<<novo_salario<<" reais\n";
            cout<<"Tendo um aumento de "<<diferenca<<" reais\n";

                }else if(strcasecmp(cargo,"Engenheiro")==0){
                    novo_salario=((salario*20)/100)+salario;
                    diferenca=novo_salario-salario;
                    cout<<"\nSeu salario era de "<<salario<<" reais\n";
                    cout<<"Com o aumento passou a ser de "<<novo_salario<<" reais\n";
                    cout<<"Tendo um aumento de "<<diferenca<<" reais\n";


                        }else if(strcasecmp(cargo,"Tecnico")==0){
                            novo_salario=((salario*30)/100)+salario;
                            diferenca=novo_salario-salario;
                            cout<<"\nSeu salario era de "<<salario<<" reais\n";
                            cout<<"Com o aumento passou a ser de "<<novo_salario<<" reais\n";
                            cout<<"Tendo um aumento de "<<diferenca<<" reais\n";


        }else{
            novo_salario=((salario*5)/100)+salario;
            diferenca=novo_salario-salario;
            cout<<"\nSeu salario era de "<<salario<<" reais\n";
            cout<<"Com o aumento passou a ser de "<<novo_salario<<" reais\n";
            cout<<"Tendo um aumento de "<<diferenca<<" reais\n";

        }




    cout<< endl;
    return 0;
}
