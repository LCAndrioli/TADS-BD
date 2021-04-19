#include <stdio.h>
#include <stdlib.h>

int main(){
    int alloc1, alloc2, a, impar;
    char *p_string1;

    printf("\nDigite o tamanho: ");
    scanf(" %i", &alloc1);

    p_string1 = malloc(alloc1*sizeof(char));

    printf("Digite a palavra: ");
    scanf(" %s", p_string1);
    
    printf(" - Posicoes Impares: ");
    impar = 0;
    for(a=0;a<alloc1;a++){
        if(impar == 1){
            printf("%c", p_string1[a]);
            impar = 0;
        }
        else{
            impar++;
        }
    }
    
    return 0;
}
