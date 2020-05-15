#include<iostream>
using namespace std;

int main()
{
    int f,c,n;
    
    cout<<"introdusca max numero para hallar el factorial de esos numeros:";
    cin>>n;
    for ( c = 1; c <= n; c++)
    {   
        f=1;
        int i;
        for (i=1; i <= c; i++)
        {
             
             f=f*i;
        }
        cout<<"el factorial es: "<<f<<"\n";
       
        
    }
    
    
}