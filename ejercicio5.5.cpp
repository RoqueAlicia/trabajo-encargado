#include<iostream>
#include<conio.h>
using namespace std;
int main();
 int i=1;
      while ( i * i < 10 ) 
 {
     int j=i;
     while(j*j<100){
        cout<<i+j<<" ";
        j*=2;
    }
    i++;
    cout<<endl;
}
cout<<"/n*****/n";
LA SALIDA DE BUCLE ES:
2,3,5,9.6,10,6,9