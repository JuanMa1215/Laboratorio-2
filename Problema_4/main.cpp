#include <iostream>
#include <stdlib.h>
using namespace std;

int cambi(char * x); //Prototipo de función

int main(){
    char * cad = "201021";
    int num ;
                            //Programa de prueba
    num=cambi(cad);
    cout<<num<<endl;


    return 0;
}

int cambi(char * x){    //Función
    int y;
    y = atoi(x);
    return y;
}

