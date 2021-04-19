#include <stdio.h>

double fatorial(int v1);

int main(){
    int valor1;

    printf("Digite um valor: ");
    scanf(" %i", &valor1);
    printf(" - Fatorial: %.0f", fatorial(valor1));

    return 0;
}

double fatorial(int v1){
    int a, resultado;

    resultado = 1;

    for( a=0 ; a<v1 ; a++ )
    {
        resultado = resultado * (a+1);
    }
    
    return resultado;
}
