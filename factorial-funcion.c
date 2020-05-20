#include <stdio.h>

void factorial(int n)
{
    int i,j,f;
    for (j = 1; j <= n; j++)
    {
        f=1;
        for (i = 1; i <= j; i++)
        {
            f = f * i;
        }
        printf("factorial es: %d\n", f);
        printf("------------------\n");
    }
}
int main()
{
    int n=3;
    // printf("intro un numero\n");
    // n = 3;
    factorial(n);
    
}