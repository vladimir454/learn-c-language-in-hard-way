#include <stdio.h>
#include <string.h>

double Perimetro(int r)
{
    double p;
    p = 2 * 3.1415 * r; //formula para hallar el perimetro
    return p;
}
double Area(int r)
{
    double a;
    return a = 3.1415 * r * r;
}
double VOlumen(int r)
{
    double v;
    return v = 3.1415*r*r*r*((double)3/(double)4);
}
int main()
{
    int n, op;
    printf("seleccione una opcion\n");

    printf("Op 1: hallar Perimetro\n");
    printf("Op 2: hallar Area\n");
    printf("Op 3: hallar Volumen\n");

    scanf("%d", &op);

    if (op == 1)
    {
        printf("intro el Radio");
        scanf("%d", &n);
        printf("el perimetro es %f\n ", Perimetro(n));
    }
    if (op == 2)
    {
        printf("intro el Radio");
        scanf("%d", &n);
        printf("Area del Circulo es %f\n ", Area(n));
    }
     if (op == 3)
    {   printf("intro el Radio");
        scanf("%d", &n);
        printf("Volumen de la esfera es %f\n ",  VOlumen(n));
    }

    return 0;
}
