#include <stdio.h>

int primo(int v1);

int main(){
    int valor1;

    printf("Digite um valor: ");
    scanf(" %i", &valor1);

    if(primo(valor1)==2){
        printf(" - PRIMO ");
    }
    else
    {
        printf(" - NAO PRIMO");
    }
    

    return 0;
}

int primo(int v1){
    int a, contagem;

    contagem=0;

    //"for" conta quantas multiplicacoes sao feitas
    for ( a=(v1-1) ; a>0; a-- )
    {
        if(v1 % a ==0)
        {
            contagem++;
        }

    }
    
    // se "contagem" ficar maior que 1 nao e primo
    if (contagem > 1)
    {
        return 1;
    }
    // se nao, vc sabe bem...
    else
    {
        return 2;
    }
}
