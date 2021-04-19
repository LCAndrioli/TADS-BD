#include <stdio.h>

int agregar(int v1, int v2);

int main()
{
    int valor1, valor2;
    printf("Digite dois numeros com 3 digitos: ");
    scanf(" %i %i", &valor1, &valor2);
    printf(" - Resultado: %i", agregar(valor1, valor2));
    
    return 0;
}

int agregar(int v1, int v2)
{
    int fim, cent1, cent2, dez1, dez2, resultado, aux;

    cent1 = 0;
    cent2 = 0;
    fim = 0;
    //pega centenas
    do
    {
        if(v1>99)
        {
            v1 -= 100;
            cent1++;
            fim++;
        }
        else if(v2>99)
        {
            v2 -= 100;
            cent2++;
            fim ++;
        }
        else
        {
            fim = 0;
        }
        
    } while (fim!=0);

    dez1 = 0;
    dez2 = 0;
    fim = 0;

    //pega dezenas
    do
    {
        if(v1>9)
        {
            v1 -= 10;
            dez1 ++;
            fim ++;
        }
        else if(v2>9)
        {
            v2 -= 10;
            dez2 ++;
            fim++;
        }
        else
        {
            fim = 0;
        }
        
    } while (fim!=0);

    //soma e verifica centena

    aux = cent1 + cent2;

    if(aux< 9)
    {
        resultado = aux * 100;
    }

    //soma e verifica dezena

    aux = dez1 + dez2;

    if (aux<9)
    {
        aux *= 10;
        resultado += aux;
    }

    //soma e verifica unidade
    
    aux = v1 + v2;
    
    if(aux < 9);
    {
        resultado += aux;
    }

    return resultado;
    
}