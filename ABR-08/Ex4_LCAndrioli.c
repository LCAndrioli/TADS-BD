#include <stdio.h>

void limpaNome();
void cadastrarAlunos();
void cadastrarDisciplinas();
void visualizarAlunosEDisciplinas();
void matricularAlunos();
void visualizarAlunosMatriculados();

char c, nome[50];
int i;

int main()
{
    int opcao1;
    do
    {
        for ( i=0 ; i<10 ; i++){printf("----");}
        printf("\n(1) - Cadastrar Aluno\n(2) - Cadastrar Disciplina\n(3) - Visualizar Alunos e Disciplinas\n(4) - Matricular Aluno\n(5) - Visualizar Matriculas\n(0) - Sair\n");
        for ( i=0 ; i<10 ; i++){printf("----");}printf("\nOpcao: ");
        scanf(" %i", &opcao1);
        for ( i=0 ; i<10 ; i++){printf("----");}

        switch (opcao1)
        {
        case 0:
            /* Sair */
            printf("\n\n[TCHAU]\n\n");
            break;
        case 1:
            /* Cadastrar Aluno */
            cadastrarAlunos();
            break;
        case 2:
            /* Cadastrar Disciplina */
            cadastrarDisciplinas();
            break;
        case 3:
            /* Visualizar Alunos e Disciplinas */
            visualizarAlunosEDisciplinas();
            break;
        case 4:
            /* Matricular Aluno */
            matricularAlunos();
            break;
        case 5:
            /* Visualizar Matriculas */
            visualizarAlunosMatriculados();
            break;
        default:
            printf("\n\tOpcao invalida. Tente novamente.\n");
            break;
        }
    } while (opcao1 != 0);
    return 0;
}
void limpaNome()
{
    for (i = 0; i < 50; i++)
    {
        nome[i] = NULL;
    }
}

void cadastrarAlunos(){

    FILE *al;
    al = NULL;
    al = fopen("alunos.txt", "a+");
    limpaNome();
    printf("\nAluno: ");
    fflush(stdin);
    gets(nome);

    if(al == NULL)
    {
        printf("\n\tErro ao abrir o arquivo!");
    }
    else
    {
        for ( i=0; nome[i] != '\0' ; i++ )
        {
            fputc(nome[i], al);
        }
        fputc('\n', al);
    }
    fclose(al);
}

void cadastrarDisciplinas()
{
    FILE *dp;
    dp = NULL;
    dp = fopen("disciplinas.txt", "a+");
    limpaNome();
    printf("\nDisciplina: ");
    fflush(stdin);
    gets(nome);

    if(dp == NULL)
    {
        printf("\n\tErro ao abrir o arquivo!");
    }
    else
    {
        for ( i=0; nome[i] != '\0' ; i++ )
        {
            fputc(nome[i], dp);
        }
        fputc('\n', dp);
    }
    fclose(dp);
}
void visualizarAlunosEDisciplinas()
{
    FILE *ax, *dx;
    char d, a;
    int linha, linhatual;

    ax = NULL;
    dx = NULL;
    ax = fopen("alunos.txt", "a+");
    dx = fopen("disciplinas.txt", "a+");

    if (ax == NULL || dx == NULL)
    {
        printf("\n\tErro ao abrir os arquivos!\n");
    }
    else
    {
        printf("\n\tALUNOS CADASTRADOS\n");
        for ( i=0 ; i<10 ; i++){printf("- - ");}
        linha=1;
        linhatual=1;
        a = fgetc(ax);
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
                        printf("%c", a);
                        a = fgetc(ax);
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
                a = fgetc(ax);
                if (a == EOF)
                {
                    linhatual--;
                }
            }
        } while (a != EOF);
        printf("\n");
        for ( i=0 ; i<10 ; i++){printf("----");}
        printf("\n\tDISCIPLINAS CADASTRADAS\n");
        for ( i=0 ; i<10 ; i++){printf("- - ");}
        linha=1;
        linhatual=1;
        d = fgetc(dx);
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
                        printf("%c", d);
                        d = fgetc(dx);
                    }
                    while (d != '\n' && d != EOF);
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
                d = fgetc(dx);
                if (d == EOF)
                {
                    linhatual--;
                }
            }
        } while (d != EOF);
        printf("\n");
    }
    fclose(ax);
    fclose(dx);
}
void matricularAlunos()
{
    char aux;
    FILE *pegaluno, *pegdisciplina, *matr;
    int linhaAluno, linhaDisciplina, cont = 1, peg = 0;

    printf("\nLinha Aluno: ");
    scanf(" %i", &linhaAluno);
    printf("Linha Disciplina: ");
    scanf(" %i", &linhaDisciplina);

    if (linhaAluno > 3){ linhaAluno = 3; }
    if (linhaAluno < 1){ linhaAluno = 1; }
    if (linhaDisciplina > 3){ linhaDisciplina = 3; }
    if (linhaDisciplina < 1){ linhaDisciplina = 1; }
    
    matr = fopen("matriculas.txt", "a+");
    pegaluno = fopen("alunos.txt", "a+");
    pegdisciplina = fopen("disciplinas.txt", "a+");
    do
    {
        if (cont == linhaAluno)
        {
            do
            {
                aux = fgetc(pegaluno);
                if (aux != '\n' && aux != EOF)
                {
                    fputc(aux, matr);
                }
            }
            while (aux != '\n' && aux != EOF);
            break;
        }
        else
        {
            aux = fgetc(pegaluno);
            if (aux == '\n')
            {
                cont++;
            } 
        }
    } while (aux != EOF);
    fputc('<', matr);
    fputc('=', matr);
    fputc('>', matr);
    cont = 1;
    do
    {
        if (cont == linhaDisciplina)
        {
            do
            {
                aux = fgetc(pegdisciplina);
                if (aux != '\n' && aux != EOF)
                {
                    fputc(aux, matr);
                }
            }
            while (aux != '\n' && aux != EOF);
            break;
        }
        else
        {
            aux = fgetc(pegdisciplina);
            if (aux == '\n')
            {
                cont++;
            }
        }
    } while (aux != EOF);
    fputc('\n', matr);
    fclose(matr);
    fclose(pegaluno);
    fclose(pegdisciplina);
}
void visualizarAlunosMatriculados()
{
    int linha, linhatual;
    char a, c; 
    FILE *matrx;
    matrx = fopen("matriculas.txt", "a+");
    printf("\n\tMATRICULAS EFETUADAS\n");
    for ( i=0 ; i<10 ; i++){printf("- - ");}
    linha=1;
    linhatual=1;
    a = fgetc(matrx);
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
                    printf("%c", a);
                    a = fgetc(matrx);
                }
                while (a != '\n' && a != EOF);
            }
            else
            {
                printf("\n0 | Nenhuma matricula cadastrada.");
            }
        }
        else
        {
            if (a == '\n')
            {
                linhatual++;
            }
            a = fgetc(matrx);
            if (a == EOF)
            {
                linhatual--;  
            }
        }
    } while (a != EOF);
    printf("\n");
    fclose(matrx);
}