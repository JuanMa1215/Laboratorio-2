#include <iostream>

using namespace std;

char letnum[100];
string num;
string lett;

int main()
{
    int i=0;

    cout<<"Escriba una cadena de caracteres mixtos: ";
    cin>>letnum;
    cout<<"Original: "<<letnum<<endl;

    while(i<sizeof(letnum)-1){
        if (isdigit(letnum[i])){
            num=num+letnum[i];
    }
        else{

              lett=lett+letnum[i];


        }
        i++;

    }

    cout<<"Texto: "<<lett<<endl<<"Numero: "<<num<<endl;
    return 0;
}
