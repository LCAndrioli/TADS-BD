#include <stdio.h>
#include <stdlib.h>

int main(){
    int alloc1, alloc2;
    char *p_string1, *p_string2;

    printf("\nDigite os dois tamanhos: ");
    scanf(" %i %i", &alloc1, &alloc2);
    
    printf("");

    p_string1 = malloc(alloc1*sizeof(char));
    p_string2 = malloc(alloc2*sizeof(char));

    printf("Digite a primeira palavra: ");
    scanf(" %s", p_string1);

    printf("Digite a segunda palavra: ");
    scanf(" %s", p_string2);
    
    printf(" - Concatenadas = %s-%s",p_string1, p_string2);
    return 0;
}
