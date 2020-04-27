#include <iostream>
using namespace std;

int main()
{
    int n, i, res, x, y;

    x = 0;
    y = 1;
    cout<<"intro tamano de la sucesion del fibonacci"<<endl;
    cin >> n;
    
        cout << x << " "; //imprimir el 0 y el 1
        cout << y << " ";
    
    //imprimimos por que son estaticos y por otro lado si es mayor a 3 imprimimos la seria usando un ciclo



        for (i = 3; i <=n; i++)
        {

            res = x + y;
            cout << res << " ";
            x = y;//asignamos el valor del y que era 1 al 0 
            y = res;//asignamos el valos sumado al y por que estaba vacio ya.
    }
       
}