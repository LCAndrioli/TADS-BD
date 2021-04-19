#include <stdio.h>

int main(){
    int valor1, valor2, *p_valor1=NULL, *p_valor2=NULL;

    printf("\nDigite dois Valores inteiros: ");
    scanf(" %i%i",&valor1, &valor2);
    p_valor1 = &valor1;
    p_valor2 = &valor2;

    printf(" - Soma = %i",*p_valor1+*p_valor2);
    return 0;
}
