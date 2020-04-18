#include<iostream>
using namespace std;
//suma de numeros pares 2+4+6 = 12
//rango de 2-1000 numeros;

int main()
{
    int n=2;
    int suma=0;

    while (n<=10)
    {
        if ((n%2==0)&& (n>=2))
        {
            suma=suma+n;
           
        }
         n=n+1;
       
    }
     cout<<"suma es: "<<suma;

    
        
}