#include <stdio.h>
#include <math.h>

double pitagoras(int v1, int v2);

int main(){    
    int valor1, valor2;

    printf("Digite o valor dos catetos: ");
    scanf(" %i %i", &valor1, &valor2);
    printf(" - Hipotenusa: %.1f", pitagoras(valor1, valor2));

    return 0;
}

double pitagoras(int v1, int v2){
    int quadrado1, quadrado2, somaQuadrado;
    double resultado;

    // pega valor ao quadrado em variaveis auxiliares para nao perder o valor original
    quadrado1 = v1 * v1;
    quadrado2 = v2 * v2;

    somaQuadrado = quadrado1 + quadrado2;

    resultado = sqrt(somaQuadrado);

    return resultado;
}
