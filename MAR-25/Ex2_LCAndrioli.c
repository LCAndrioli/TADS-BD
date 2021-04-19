#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar(int *vt);

int main()
{
    srand(time(NULL));
    int *vetor, a;
    vetor = malloc(10*sizeof(int));

    //gera vetor
    printf("\n Vetor Aleatorio: ");
    for( a=0 ; a<10 ; a++)
    {
        vetor[a] = 10 + rand()%89;
        printf("%i ", vetor[a]);
    }

    //ordena
    ordenar(vetor);

    //exibe a ordenacao
    printf("\n- Vetor Ordenado: ");
    for( a=0 ; a<10 ; a++)
    {
        printf("%i ", vetor[a]);
    }
    printf("\n\n");

    return 0;
}

void ordenar(int *vt)
{
    int *js = vt, a, b, m, aux;

    for( a=0 ; a<9 ; a++ )
    {
        m = a;
        for( b=a+1 ; b<10; b++ )
        {
            if( js[m] > js[b] )
            {
                m = b;
            }
        }
        aux = js[m];
        js[m] = js[a];
        js[a] = aux;
    }

}