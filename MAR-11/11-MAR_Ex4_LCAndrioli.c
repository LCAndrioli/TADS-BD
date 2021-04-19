#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int comp, a, cont;
    char *p_palavra1, *p_palavra2;

    cont = 0;
    p_palavra1 = malloc(10*sizeof(char));
    p_palavra2 = malloc(10*sizeof(char));

    //limpa os ponteiros
    for(a=0;a<10;a++)
    {
        p_palavra1[a] = NULL;
        p_palavra2[a] = NULL;
    }

    //pega palavras e aloca nos ponteiros
    printf("Digite duas palavras:\n");
    gets(p_palavra1);
    gets(p_palavra2);

    //conta quantas vezes as strings sao iguais
    for(a=1;a<10;a++)
    {
        comp = strncmp(p_palavra1, p_palavra2, a);
        if(comp == 0)
        {
            cont++;
        }
    }

    printf(" - Letras iguais: %i / ", cont);

    //apresenta a string de forma limitada
    for ( a=0 ; a<cont ; a++ )
    {
        printf("%c", p_palavra1[a]);
    }

    return 0;
}