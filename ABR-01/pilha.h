#ifndef PILHA_H
#define PILHA_H

#include <stdlib.h>

int pp, *pilha, i;

int INIT_PILHA() {
    pp = 0;
    pilha = malloc(sizeof(int));
    pilha[0] = NULL;

    return 0;
}

int PUSH(int dado) {
    //se pilha estiver vazia, realoca e adiciona, o proximo ja e definido como NULL
    if(pilha[0] == NULL)
    {   
        pilha = realloc(NULL,2*sizeof(int));
        pilha[0] = dado;
        pilha[1] = NULL;
        pp = 0;
        return 1;
    }
    //se pp igual a 3, significa que a pilha esta cheia
    else if(pp == 3)
    {
        return -1;
    }
    else
    {
        //i pega o local onde esta o ultimo valor do ponteiro para alteracao, pp fica com o valor de i, e realoca definindo o proximo como NULL
        for ( i=0; pilha[i]!=NULL ; i++){}printf("[I = %i]", i);
        pp = i;
        i += 1;
        pilha = realloc(pilha,i*sizeof(int));
        pilha[i-1] = dado;
        pilha[i] = NULL;

        return 1;
    }
    
}

int POP() {
    int dado;

    //se pilha[0] for nulo significa que nao ha valores para serem removidos
    if (pilha[0]==NULL)
    {
        return -1;
    }
    //se apenas haver valor na pilha[0]
    else if(pilha[1]==NULL)
    {
        dado = pilha[0];
        pilha = realloc(NULL, 1*sizeof(int));
        pilha[0] = NULL;

        return dado;
    }
    //outros casos
    else
    {
        dado = pilha[pp];
        pilha = realloc(pilha,(pp+1)*sizeof(int));
        pilha[pp] = NULL;
        pp--;

        return dado;
        
    }
}

void VIEW_LIFO() {
    printf("\n");
    for ( i = 0; i < 15; i++){printf("- - ");}
    printf("\n");
    
    if (pilha[0]==NULL)
    {
        printf("\n\tPilha Vazia.\n\n");
    }
    else if(pilha[1]==NULL)
    {
        printf("\n\tPilha: ");
        printf("\n\t\t%i\n", pilha[0]);
    }
    else
    {   
        printf("\n\tPilha: ");
        for ( i=pp; i > -1 ; i--)
        {   
            if (pilha[i] != NULL)
            {
                printf("\n\t\t%i", pilha[i]);
            }
            if ( i > 0)
            {
                printf("\n\t\t^");
            }
            
        }
        printf("\n");
    }
}

#endif





