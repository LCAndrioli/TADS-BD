#include <stdio.h>
#include <stdlib.h>

int main(){
    int alloc1, alloc2, a;
    char *p_string1;

    printf("\nDigite o tamanho: ");
    scanf(" %i", &alloc1);

    p_string1 = malloc(alloc1*sizeof(char));

    printf("Digite a palavra: ");
    scanf(" %s", p_string1);
    
    printf(" - Invertida = ");
    for(a=alloc1;a>0;a--){
        printf("%c", p_string1[a-1]);
    }
    
    return 0;
}
