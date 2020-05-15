#include<iostream>
using namespace std;

int main()
{
    int c,n;
    for ( c = 1; c <= 10; c++)
    {   
        int i;
        
        for (i=1; i <= 10; i++)
        {     
             n=c*i;
             cout<<n<<"\n";
        }  
    }   
    
}