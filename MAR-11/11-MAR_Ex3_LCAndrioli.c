#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a;
    char *p_palavra1, *p_palavra2, *p_palavra3, *p_palavra4;
    p_palavra1 = malloc(10*sizeof(char));
    p_palavra2 = malloc(10*sizeof(char));
    p_palavra3 = malloc(10*sizeof(char));
    p_palavra4 = malloc(10*sizeof(char));

    for(a=0;a<10;a++){
        p_palavra4[a] = NULL;
    }

    printf("Digite tres nomes:\n");
    gets(p_palavra1);
    gets(p_palavra2);
    gets(p_palavra3);

    strcat(p_palavra4, p_palavra1);
    strcat(p_palavra4, p_palavra2);
    strcat(p_palavra4, p_palavra3);

    printf(" - Concatenado: %s", p_palavra4);

    return 0;
}