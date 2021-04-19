#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int tamanho1, tamanho2, tamanho3;
    char *p_palavra1, *p_palavra2, *p_palavra3;
    p_palavra1 = malloc(10*sizeof(char));
    p_palavra2 = malloc(10*sizeof(char));
    p_palavra3 = malloc(10*sizeof(char));

    printf("Digite tres nomes:\n");
    gets(p_palavra1);
    gets(p_palavra2);
    gets(p_palavra3);

    printf(" - Ordem Crescente:");

    //comparando palavra 1 com a 2
    tamanho1 = strlen(p_palavra1);
    tamanho2 = strlen(p_palavra2);
    tamanho3 = strlen(p_palavra3);
    
    // 1 e 2 igual
    if(tamanho1 == tamanho2){
        // tudo igual
        if(tamanho1 == tamanho3){
            printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);
        }
        // 3 menor
        else if(tamanho1 > tamanho3){
            printf(" %s %s %s", p_palavra3, p_palavra1, p_palavra2);
        }
        // 1 e 2 menor
        else{
            printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);

        }
    }
    // 2 menor
    else if(tamanho1 > tamanho2){
        // 2 e 3 igual
        if(tamanho2 == tamanho3){
            printf(" %s %s %s", p_palavra2, p_palavra3, p_palavra1);
        }
        // 3 menor
        else if(tamanho2 > tamanho3){
            printf(" %s %s %s", p_palavra3, p_palavra2, p_palavra1);
        }
        // 2 menor
        else{
            // 1 e 3 igual
            if(tamanho1 == tamanho3){
                printf(" %s %s %s", p_palavra2, p_palavra1, p_palavra3);
            }
            // 3 menor
            else if(tamanho1 > tamanho3){
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
        // 1 e 3 igual
        if(tamanho1 == tamanho3){
            printf(" %s %s %s", p_palavra1, p_palavra3, p_palavra2);
        }
        // 3 menor
        else if(tamanho1 > tamanho3){
            printf(" %s %s %s", p_palavra3, p_palavra1, p_palavra2);
        }
        // 1 menor
        else{
            // 2 e 3 igual
            if(tamanho2 == tamanho3){
                printf(" %s %s %s", p_palavra1, p_palavra2, p_palavra3);
            }
            // 3 menor
            else if(tamanho2 > tamanho3){
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