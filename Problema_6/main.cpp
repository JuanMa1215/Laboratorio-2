#include <iostream>

using namespace std;

int main(){
    int i;
    string c;
    cout << "Ingrese palabra: ";
    cin>>c;
    cout<<"Original: "<<c<<". ";
    for(i=0; i<c.length(); i++){
        c[i] = toupper(c[i]); //tolower() para minusculas

    }
    cout<<"En mayuscula: "<<c<<endl;
    return 0;
}

