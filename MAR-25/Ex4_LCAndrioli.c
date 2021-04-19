#include <stdio.h>
#include <stdlib.h>

//no slide tava escrito assim....
void desembalhar(char *p_strng1, char *p_strng2);

int main()
{
    int i;
    char *p_string, *p_streen;

    p_string = malloc(30*sizeof(char));
    p_streen = malloc(30*sizeof(char));

    //limpa lixo de memoria
    for ( i=0 ; i<30 ; i++)
    {
        p_string[i] = NULL;
        p_streen[i] = NULL; 
    }
    
    //pede variaveis
    printf("\n\nDigite uma palavra: ");
    gets(p_string);
    printf("Digite a mesma palavra embaralhada: ");
    gets(p_streen);
    //chama funcao
    desembalhar(p_string, p_streen);

    printf(" - Desembaralhada: %s\n\n", p_streen);

    return 0;
}

void desembalhar(char *p_strng1, char *p_strng2)
{
    int i, x;
    char aux;
    //primeiro for percorre primeira palavra/nome
    for ( i=0 ; p_strng1[i] ; i++)
    {
        //segundo for percorre segunda palavra/nome
        for ( x=0 ; p_strng2[x] ; x++)
        {
            //se os caracteres de string 2 for igual a da string 1, troca na propria string 2
            if (p_strng2[x] == p_strng1[i])
            {
                aux = p_strng2[i];
                p_strng2[i] = p_strng2[x];
                p_strng2[x] = aux;
            }
        }
    }
    
}