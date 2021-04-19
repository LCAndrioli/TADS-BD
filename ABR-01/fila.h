#ifndef _FILA_
#define _FILA_

#include <stdlib.h>

int pf, *fila, limit;

int INIT_FILA() {
    pf = 0;
    fila = malloc(sizeof(int));
    fila[0] = NULL;

    return 0;
}

int ENQUEUE(int dado) {
    //se fila estiver vazia, realoca e adiciona, o proximo ja e definido como NULL
    if(fila[0] == NULL)
    {   
        fila = realloc(NULL,2*sizeof(int));
        fila[0] = dado;
        fila[1] = NULL;
        limit = 0;
        return 1;
    }
    //se limit igual a 3, significa que a fila esta cheia
    else if(limit == 3)
    {
        return -1;
    }
    else
    {
        //i pega o local onde esta o ultimo valor do ponteiro para alteracao, limit fica com o valor de i, e realoca definindo o proximo como NULL
        for ( i=0; fila[i]!=NULL ; i++){}printf("[I = %i]", i);
        limit = i;
        i++;
        fila = realloc(fila,i*sizeof(int));
        fila[i-1] = dado;
        fila[i] = NULL;
        return 1;
    }
}

int DEQUEUE() {
    int dado, aux;

    //se pilha[0] for nulo significa que nao ha valores para serem removidos
    if(fila[0]==NULL)
    {
        return -1;
    }
    //se apenas haver valor na pilha[0]
    else if(fila[1]==NULL)
    {
        dado = fila[0];
        fila = realloc(NULL,1*sizeof(int));
        fila[0] = NULL;
        limit--;

        return dado;
    }
    //outros casos
    else
    {
        dado = fila[0];
        fila[0] = 0;
        for (i=1; fila[i]!=NULL ; i++)
        {
                aux = fila[i];
                fila[i] = fila[i-1];
                fila[i-1] = aux;     
        }
        printf("");
        fila = realloc(fila,i*sizeof(int));
        fila[i] = NULL;
        limit--;
        
        return dado;
    }
    

    return -1;
}

void VIEW_FIFO() {
    printf("\n");
    for ( i = 0; i < 15; i++){printf("- - ");}
    printf("\n");
    
    if (fila[0]==NULL)
    {
        printf("\n\tFila Vazia.\n\n");
    }
    else if(fila[1]==NULL)
    {
        printf("\n\tFila: ");
        printf("\n\t\t%i\n", fila[0]);
    }
    else
    {   
        printf("\n\tFila: ");
        printf("\n\t");
        for ( i=0; i<limit+1 ; i++)
        {   
            if ( fila[i] != NULL )
            {
                if ( i > 0 )
                {
                    printf(" > ");
                }
                printf("%i", fila[i]);
            }
            
        }
        printf("\n");
    }
}

#endif