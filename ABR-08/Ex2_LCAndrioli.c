#include <stdio.h>

int main()
{
    FILE *dp;
    char c, nome[50];
    int i;

    printf("\nDisciplina: ");
    fflush(stdin);
    gets(nome);

    dp = fopen("disciplinas.txt", "a+");

    printf("\n");
    if(dp == NULL)
    {
        printf("Erro ao abrir o arquivo!");
    }
    else
    {
        for ( i=0; nome[i] != '\0' ; i++ )
        {
            fputc(nome[i], dp);
        }
        fputc('\n', dp);
        fclose(dp);
    }

    printf("\n");
    return 0;
}