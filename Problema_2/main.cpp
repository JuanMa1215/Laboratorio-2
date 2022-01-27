#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
   char v[10];
   int i;
   int p;
   char c = 65;
   int k = 0;
   int e;
   srand(time(NULL));
   for(i=0;i<10;i++){
       v[i] = char(65+rand()%(90-65+1));
       cout<< v[i];
   }
   for(e=0;e<26;e++){
        for(p=0;p<10;p++){
            if( c == v[p]){
                k++;
             }
        }
        cout<<"\n"<<c<<": "<<k;
        k=0;
        c++;
   }



}
