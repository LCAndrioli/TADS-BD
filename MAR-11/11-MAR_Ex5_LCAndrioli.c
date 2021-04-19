#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a, n;
    char *p_palavra1, *p_palavra2, *p_palavra3;

    n = 0;
    p_palavra1 = malloc(10*sizeof(char));
    p_palavra2 = malloc(10*sizeof(char));
    p_palavra3 = malloc(10*sizeof(char));

    //limpa os ponteiros
    for(a=0;a<10;a++)
    {
        p_palavra1[a] = NULL;
        p_palavra2[a] = NULL;
        p_palavra3[a] = NULL;
    }

    //pega palavras e aloca nos ponteiros
    printf("Digite o valor inteiro: ");
    scanf(" %i ", &n);

    gets(p_palavra1);
    gets(p_palavra2);
    gets(p_palavra3);

    printf(" - Concatenado: ");

    //apresenta a string de forma limitada
    for ( a=0 ; a<n ; a++ ){
        printf("%c", p_palavra1[a]);
    }
    for ( a=0 ; a<n ; a++ ){
        printf("%c", p_palavra2[a]);
    }
    for ( a=0 ; a<n ; a++ ){
        printf("%c", p_palavra3[a]);
    }

    return 0;
}