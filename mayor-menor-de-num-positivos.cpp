#include <iostream>
using namespace std;

//realiozar un progra que lea 3 numeros enteros positivos diostintos e imprimir el mayor y el menor valos de los tres elementos.
int main()
{
    int a, b, c;
    int max = 0, min = 0;

    cout << "intro 1er numero :";
    cin >> a;
    cout << "intro 2do numero :";
    cin >> b;
    cout << "intro 3er numero :";
    cin >> c;
    //para hallar el mayor numero de los 3 numeros
    if ((a != b) && (b != c))
    {

        if (a > b)
        {
            if (a > c)
            {
                max = a;
            }
            else
            {
                max = c;
            }
        }
        else
        {
            if (b > c)
            {
                max = b;
            }
            else
            {
                max = c;
            }
        }
        //para hallar el menor numero de los 3 numeros
        if (a < b)
        {
            if (a < c)
            {
                min = a;
            }
            else
            {
                min = c;
            }
        }
        else
        {
            if (b < c)
            {
                min = b;
            }
            else
            {
                min = c;
            }
        }
        cout << "el menor num es: " << min << endl;
        cout << "el mayor num es: " << max << endl;
    }
    else
    {
         cout<<"los elementos introducidos son iguales tiene que ser diferente.."<<endl;
    }
    
   
}