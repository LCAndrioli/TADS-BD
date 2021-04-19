#include <stdio.h>

int main()
{
    FILE *al;
    char c, nome[50];
    int i;

    printf("\nAluno: ");
    fflush(stdin);
    gets(nome);

    al = fopen("alunos.txt", "a+");

    printf("\n");
    if(al == NULL)
    {
        printf("Erro ao abrir o arquivo!");
    }
    else
    {
        for ( i=0; nome[i] != '\0' ; i++ )
        {
            fputc(nome[i], al);
        }
        fputc('\n', al);
        fclose(al);
    }

    printf("\n");
    return 0;
}