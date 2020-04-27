#include<iostream>
using namespace std;

//nivel 1 de como sacar numeros primos
int main()
{
    int i,n,j,res;
    cout<<"introdusca un numero"<<endl;
    cin>>n;

    j=0;
    for (i = 2; i < n; i++)
    {
        res=n%i;
       if (res==0)
       {
           j=1;
           
       }
          
    }
    
    if (j==1)
    {
        cout<<"No es primo ";
    }
    else
    {
        cout<<"es primo";
    }
    
    
    
}