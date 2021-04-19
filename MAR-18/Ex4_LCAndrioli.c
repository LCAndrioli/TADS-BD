#include <stdio.h>
#include <ctype.h>

void ordenar(char l1, char l2, char l3, char l4, char l5);

int main(){
    int valor1;
    char letra1, letra2, letra3, letra4, letra5;

    printf("Digite cinco letras: ");
    scanf(" %c %c %c %c %c", &letra1, &letra2, &letra3, &letra4, &letra5);
    ordenar(letra1, letra2, letra3, letra4, letra5);
    

    return 0;
}

void ordenar(char l1, char l2, char l3, char l4, char l5){
    int aux, trocar;

    // torna todos uppercase
    if (l1 > 96 && l1 < 123)
    {
        l1 -= 32;
    }
    if (l2 > 96 && l2 < 123)
    {
        l2 -= 32;
    }
    if (l3 > 96 && l3 < 123)
    {
        l3 -= 32;
    }
    if (l4 > 96 && l4 < 123)
    {
        l4 -= 32;
    }
    if (l5 > 96 && l5 < 123)
    {
        l5 -= 32;
    }

    //ordena letra l1
    do
    {
        trocar=0;
        if (l1 > l2)
        {
            aux = l1;
            l1 = l2;
            l2 = aux;
            trocar++;
        }
        else if (l1 > l3)
        {
            aux = l1;
            l1 = l3;
            l3 = aux;
            trocar++;
        }
        else if (l1 > l4)
        {
            aux = l1;
            l1 = l4;
            l4 = aux;
            trocar++;
        }
        else if(l1 > l5)
        {
            aux = l1;
            l1 = l5;
            l5 = aux;
            trocar++;
        }
        
    }while (trocar != 0);

    //ordena letra 2  
    do
    {
        trocar=0;
        if (l2 > l3)
        {
            aux = l2;
            l2 = l3;
            l3 = aux;
            trocar++;
        }
        else if (l2 > l4)
        {
            aux = l2;
            l2 = l4;
            l4 = aux;
            trocar++;
        }
        else if(l2 > l5)
        {
            aux = l2;
            l2 = l5;
            l5 = aux;
            trocar++;
        }
        
    }while (trocar != 0);

    //ordena letra 3
    do
    {
        trocar=0;
        if (l3 > l4)
        {
            aux = l3;
            l3 = l4;
            l4 = aux;
            trocar++;
        }
        else if(l3 > l5)
        {
            aux = l3;
            l3 = l5;
            l5 = aux;
            trocar++;
        }
        
    }while (trocar != 0);

    //ordena letra 4
    do
    {
        trocar=0;
        if (l4 > l5)
        {
            aux = l4;
            l4 = l5;
            l5 = aux;
            trocar++;
        }
        
    }while (trocar != 0);

    printf(" %c %c %c %c %c ", l1, l2, l3, l4, l5);

}