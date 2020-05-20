#include<stdio.h>


void primos(int n)
{
    int res,i,j,aux;
    for (i = 2; i <= n; i++)
    {
         aux = 0;
        for ( j = 2; j < i && aux!=1; j++)
        {

            res = i % j;
            if (res == 0)
            {
                aux = 1;
            }
          
        }
        
        if (aux!=1)
        {
            printf(" %d",i);
        }
       
    }
}

int main()
{
    int  n;
    n=5;

    primos(n);
       
    
}