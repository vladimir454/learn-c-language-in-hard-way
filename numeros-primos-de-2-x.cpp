#include <iostream>
using namespace std;

//nivel 1 de como sacar numeros primos
int main()
{
    int i, n, j,aux, res,aux2;
    cout << "introdusca un numero" << endl;
    cin >> n;

    for (i = 2; i <= n; i++)
    {
         aux = 0;
        for ( j = 2; j < i; j++)
        {

            res = i % j;
            if (res == 0)
            {
                aux = 1;
            }
          
        }
        if (aux==1)
        {
            cout<<"false ";
        }
        else
        {            
            cout<<"prime ";
        }
     
    }
       
    
}