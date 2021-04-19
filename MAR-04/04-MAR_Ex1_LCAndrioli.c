#include <stdio.h>

int main(){
    int *p_inteiro;
    char *p_caractere;

    printf("Digite um numero inteiro e um caracter: ");
    scanf(" %i", &p_inteiro);
    scanf(" %c", &p_caractere);
    // por algum motivo, o %p nao funciona adequadamente na minha maquina.
    printf("\n - [Inteiro]: endereco = %p / conteudo = %i",&p_inteiro, p_inteiro);
    printf("\n - [Caractere]: endereco = %p / conteudo = %c",&p_caractere, p_caractere);
    return 0;
}
