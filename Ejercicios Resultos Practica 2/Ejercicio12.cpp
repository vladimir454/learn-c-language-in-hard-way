#include<iostream>
using namespace std;

int main()
{
    int c,x, b,p;
    cout<<"hallar la potencia de un numero dato\n base: ";
    cin>>b;
    cout<<"potencia: ";
    cin>>p;
    x=1;
    for(c=1; c<=p; c++)
    {  
        x=x*b;
    }
    cout<<x;
}