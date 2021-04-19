#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int comp, comp2;
    char *p_palavra1, *p_palavra2, *p_palavra3;
    p_palavra1 = malloc(10*sizeof(char));
    p_palavra2 = malloc(10*sizeof(char));
    p_palavra3 = malloc(10*sizeof(char));

    printf("Digite tres nomes:\n");
    gets(p_palavra1);
    gets(p_palavra2);
    gets(p_palavra3);

    printf(" - Ordem Alfabetica:");

    //comparando palavra 1 com a 2
    comp = strncmp(p_palavra1, p_palavra2, 10);
    
    // 1 e 2 igual
    if(comp == 0){
        comp2 = strncmp(p_palavra1, p_palavra3, 10);
        // tudo igual
        if(comp2 == 0){
            printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);
        }
        // 3 menor
        else if(comp2 > 0){
            printf(" %s %s %s", p_palavra3, p_palavra1, p_palavra2);
        }
        // 1 e 2 menor
        else{
            printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);

        }
    }
    // 2 menor
    else if(comp > 0){
        //comparando 2 e 3
        comp2 = strncmp(p_palavra2, p_palavra3, 10);
        // 2 e 3 igual
        if(comp2 == 0){
            printf(" %s %s %s", p_palavra2, p_palavra3, p_palavra1);
        }
        // 3 menor
        else if(comp2 > 0){
            printf(" %s %s %s", p_palavra3, p_palavra2, p_palavra1);
        }
        // 2 menor
        else{
            // 2 menor que todos, comparando 1 e 3
            comp2 = strncmp(p_palavra1, p_palavra3, 10);
            // 1 e 3 igual
            if(comp2 == 0){
                printf(" %s %s %s", p_palavra2, p_palavra1, p_palavra3);
            }
            // 3 menor
            else if(comp2 > 0){
                printf(" %s %s %s", p_palavra2, p_palavra3, p_palavra1);
            }
            // 1 menor
            else{
                printf(" %s %s %s", p_palavra2, p_palavra1, p_palavra3);
            }

        }
    }
    // 1 menor
    else{
        // comparando 1 e 3
        comp2 = strncmp(p_palavra1, p_palavra3, 10);
        // 1 e 3 igual
        if(comp2 == 0){
            printf(" %s %s %s", p_palavra1, p_palavra3, p_palavra2);
        }
        // 3 menor
        else if(comp2 > 0){
            printf(" %s %s %s", p_palavra3, p_palavra1, p_palavra2);
        }
        // 1 menor
        else{
            // 1 menor que todos, comparando 2 com 3
            comp2 = strncmp(p_palavra2, p_palavra3, 10);
            // 2 e 3 igual
            if(comp2 == 0){
                printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);
            }
            // 3 menor
            else if(comp2 > 0){
                printf(" %s %s %s", p_palavra1, p_palavra3, p_palavra2);
            }
            // 2 menor
            else{
                printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);
            }

        }
    }


    return 0;
}