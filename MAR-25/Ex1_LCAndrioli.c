#include <stdio.h>
#include <math.h>

void baskhara(int a, int b, int c, double *x_1, double *x_2);

int main()
{
    int valor1, valor2, valor3;
    double x1, x2;

    printf("\nDigite os coeficientes (a), (b) e (c): ");
    scanf(" %i %i %i", &valor1, &valor2, &valor3);
    baskhara( valor1, valor2, valor3, &x1, &x2);
        
    printf(" - Raizes: %.1f %.1f\n\n", x1, x2);
    return 0;
}

void baskhara(int a, int b, int c, double *x_1, double *x_2)
{
    int b2 = b * b, aux;

    aux = a * c;
    aux = -4 * aux;
    aux = b2 + aux;

    //inverte o sinal de B
    if(b<0)
    {
        b = b * b;
        b = sqrt(b);
    }
    else
    {
        b = b * -1;
        aux =  b + sqrt(aux);
    }

    //x1
    *x_1 =  b + sqrt(aux);
    *x_1 /= (2 * a);

    //x2
    *x_2 =  b - sqrt(aux); 
    *x_2 /= (2 * a);
}