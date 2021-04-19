#include <stdio.h>
#include <stdlib.h>

void lifo();
int PUSH(int dado);
int POP();
void VIEW_LIFO();

void fifo(int *val);

int inic, i, *p_val;

int main()
{
    int opcao;
    p_val = malloc(1*sizeof(int));

    for ( i = 0; p_val[i] ; i++)
    {
        p_val[i] = NULL;
    }

    do
    {
        
        printf("\nSelecione a opcao desejada:\n- Pilha\t(1) -\n- Fila\t(2) -\n- Sair\t(0) -\n> ");
        scanf(" %i", &opcao);
        switch (opcao)
        {
        case 0:
            // nao faz nada
            break;
        case 1:
            lifo();
            break;
        case 2:
            /* code */
            break;
        default:
            printf("\n\tEsta Opcao e invalida, selecione novamente.\n");
            break;
        }
    } while (opcao!=0);

    free(p_val);

    return 0;
}
//pilha1
void lifo()
{
    int opcao1, opcao2, peg_val;

    do
    {
        printf("\nEscolha uma Opcao:\n\tPush\t(1)\n\tPop\t(2)\n\tMostrar\t(3)\n\tVoltar\t(0)\n\t> ");
        scanf(" %i", &opcao1);
        switch (opcao1)
        {
        case 0:
            // nao faz nada
            break;
        case 1:

            // PUSH
            printf("\nDigite um valor: ");
            scanf(" %i", &peg_val);
            opcao2 = PUSH(peg_val);
            if (opcao2 == -1)
            {
                printf("\n\tPilha Cheia\n");
            }

            break;
        case 2:

            // POP
            opcao2 = POP();
            if (opcao2 == -1)
            {           
                printf("\n\tPilha Vazia\n");
            }
            else
            {
                printf("\n\t%i removido\n", opcao2);
            }
            
            break;
        case 3:

            VIEW_LIFO();

            break;
        default:
            printf("\n\tEsta Opcao e invalida, selecione novamente.\n");
            break;
        }
    } while (opcao1!=0);

}
int PUSH(int dado)
{
    if(p_val[0] == NULL)
    {
        p_val = realloc(p_val,sizeof(int));
        p_val[0] = dado;
        p_val[1] = NULL;
        return 1;
    }
    else if(inic == 3)
    {
        return -1;
    }
    else
    {
        for ( i=0; p_val[i] ; i++){}
        p_val[i] = dado;
        inic = i;
        p_val = realloc(p_val,sizeof(int));
        p_val[i+1] = NULL;
        return 1;
    }
}
int POP()
{
    int dado, aux;

    if (p_val[0]==NULL)
    {
        return -1;
    }
    else if(p_val[1]==NULL)
    {
        aux = p_val[0];
        p_val = realloc(p_val, -1*sizeof(int));
        p_val[0] = NULL;
        dado = aux;

        return dado;
    }
    else
    {
        aux = p_val[inic];
        dado = aux + 1;
        printf("\n\tDado: %i, p_Val %i\n", dado, p_val[inic]);
        p_val = realloc(p_val, -1*sizeof(int));
        inic--;
        dado--;

        return dado;
        
    }
}
void VIEW_LIFO()
{
            if (p_val[0]==NULL)
            {
                printf("\n\tPilha Vazia.\n\n");
            }
            else if(p_val[1]==NULL)
            {
                printf("\n\tPilha: ");
                printf("\n\t\t%i\n", p_val[0]);
            }
            else
            {   
                printf("\n\tPilha: ");
                for ( i=inic; i > -1 ; i--)
                {   
                    if (p_val[i] != NULL)
                    {
                        printf("\n\t\t%i", p_val[i]);
                    }
                    if ( i > 0)
                    {
                        printf("\n\t\t^");
                    }
                    
                }
                printf("\n");
            }
}

void fifo(int *val)
{
    int i, opcao1, peg_val, inic;

    do
    {
        printf("\nEscolha uma Opcao:\n\tEnqueue\t(1)\n\tPop\t(2)\n\tMostrar\t(3)\n\tVoltar\t(0)\n\t> ");
        scanf(" %i", &opcao1);
        switch (opcao1)
        {
        case 0:
            // nao faz nada
            break;
        case 1:
            printf("\nDigite um valor: ");
            scanf(" %i", &peg_val);
            if(val[0] == NULL)
            {
                val[0] = peg_val;
                val = realloc(val,sizeof(int));
                val[1] = NULL;
            }
            else
            {
                for ( i=0; val[i] ; i++)
                {
                    printf(".");
                }
                val[i] = peg_val;
                inic = i;
                val = realloc(val,sizeof(int));
                val[i+1] = NULL;
            }
            break;
        case 2:
        if (val[0]==NULL)
        {
            printf("\n\tPilha Vazia.\n\n");
        }
        else if(val[1]==NULL)
        {
            val = realloc(NULL, 1*sizeof(int));
            val[0] = NULL;
        }
        else
        {
            val[inic] = NULL;
            inic--;
            
        }
            break;
        case 3:
            if (val[0]==NULL)
            {
                printf("\n\tPilha Vazia.\n\n");
            }
            else if(val[1]==NULL)
            {
                printf("\n\tPilha: ");
                printf("\n\t%i\n", val[0]);
            }
            else
            {   
                printf("\n\tPilha: ");
                for ( i=inic; i > -1 ; i--)
                {   
                    if (val[i] != NULL)
                    {
                        printf("\n\t%i", val[i]);
                    }
                }
                printf("\n");
            }
            break;
        default:
            printf("\n\tEsta Opcao e invalida, selecione novamente.\n");
            break;
        }
    } while (opcao1!=0);

}