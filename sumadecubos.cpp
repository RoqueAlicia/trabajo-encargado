#include<iostream>
#include<conio.h>
using namespace  std;
int main(){
    int suma=0, cubo;
    for(int i=1; i<=4; i++)
    {
        cubo=i * i * i;
        suma=suma+cubo;
    }
    cout<<"la suma de los cubos es:"<<suma<<endl;
    getch();
    return 0;
}   
    
    