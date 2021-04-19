#include <stdio.h>

int main()
{
    FILE *dp, *al;
    char a, d;
    int i, linha=1, linhatual=1;

    al = fopen("alunos.txt", "a+");
    dp = fopen("disciplinas.txt", "a+");

    if (al == NULL || dp == NULL)
    {
        printf("\n\tErro ao abrir os arquivos!\n");
    }
    else
    {
        printf("\n\nALUNOS CADASTRADOS\n");
        for ( i=0 ; i<10 ; i++){printf("--");}
        a = fgetc(al);
        do
        {
            if (linhatual == linha)
            {
                linha++;
                if (a != '\n' && a != EOF)
                {
                    printf("\n%i | ", linhatual);
                    do
                    {
                        if (a != EOF)
                        {
                            printf("%c", a);
                            a = fgetc(al);
                        }
                    }
                    while (a != '\n' && a != EOF);
                }
                else
                {
                    printf("\n0 | Nenhum aluno cadastrado.");
                }
                
            }
            else
            {
                if (a == '\n')
                {
                    linhatual++;
                }
                a = fgetc(al);
                if (a == EOF)
                {
                    linhatual--;
                }
                
            }
        } while (a != EOF);
        
        printf("\n");
        for ( i=0 ; i<10 ; i++){printf("--");}
        printf("\nDISCIPLINAS CADASTRADOS\n");
        for ( i=0 ; i<10 ; i++){printf("--");}
        linha=1;
        linhatual=1;
        d = fgetc(dp);
        do
        {
            if (linhatual == linha)
            {
                linha++;
                if (d != '\n' && d != EOF)
                {
                    printf("\n%i | ", linhatual);
                    do
                    {
                        if (d != EOF)
                        {
                            printf("%c", d);
                            d = fgetc(dp);
                        }
                    }while (d != '\n' && d != EOF);
                }
                else
                {
                    printf("\n0 | Nenhuma disciplina cadastrada.");
                }
            }
            else
            {
                if (d == '\n')
                {
                    linhatual++;
                }
                d = fgetc(dp);
                if (d == EOF)
                {
                    linhatual--;
                }
                
            }
            
        } while (d != EOF);
        printf("\n");
        for ( i=0 ; i<10 ; i++){printf("--");}
    }
    fclose(al);
    fclose(dp);
    
    return 0;
}