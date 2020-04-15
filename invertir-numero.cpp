#include<iostream>
using namespace std;

int main()
{
    //123 a 321 
    int n, inv=0, resid=0;
    cout<<"intro un numero : ";
    cin>>n;
    while (n>0)
    {
        resid=n%10;
        n=n/10;
        inv =inv*10+resid;
    }
    cout<<"el num invertido es: "<<inv<<endl;
    return 0;
}