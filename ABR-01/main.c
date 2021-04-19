#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    INIT_PILHA();
    INIT_FILA();
    int opc3, res, val;

    do
    {
        printf("\n");
        for ( i = 0; i < 15; i++){printf("- - ");}
        printf("\n");
        printf("\n\tEscolha uma opcao a seguir:\n\t\t- Pilha -\n\t(1) - Inserir dados\n\t(2) - Remover dados\n\t(3) - Visuializar\n\t\t- Fila -\n\t(4) - Inserir dados\n\t(5) - Remover dados\n\t(6) - Visualizar\n\n\t(0) - Sair\n\n\t> ");
        scanf(" %i", &opc3);

        switch(opc3)
        {
            case 0:
            
                /* Sair */

                break;
            case 1:
                //pega valor
                printf("\n\tDigite um numero inteiro para Pilha: ");
                scanf(" %i", &val);
                //adiciona valor
                res = PUSH(val);
                //se -1 Pilha vazia.
                if(res == -1)
                {
                    printf("\n\t// Pilha Cheia //\n");
                }

                break;
            case 2:

                //remove ultimo valor adicionado
                res = POP();
                if(res == -1)
                {
                    printf("\n\t// Pilha Vazia //\n");
                }
                else
                {
                    printf("\n\t// Excluido //\n");
                }
                

                break;
            case 3:

                //Le o ponteiro
                VIEW_LIFO();

                break;
            case 4:
                //pega valor
                printf("\n\tDigite um numero inteiro para Fila: ");
                scanf(" %i", &val);
                //adiciona valor
                res = ENQUEUE(val);
                //se -1 Pilha vazia.
                if(res == -1)
                {
                    printf("\n\t// Fila Cheia //\n");
                }

                break;
            case 5:

                //remove ultimo valor adicionado
                res = DEQUEUE();
                if(res == -1)
                {
                    printf("\n\t// Fila Vazia //\n");
                }
                else
                {
                    printf("\n\t// Excluido //\n");
                }

                break;
            case 6:

                VIEW_FIFO();

                break;
            
            default:

                printf("\n\t /// Opcao invalida. Escolha novamente. ///\n");

                break;
        }
        
    } while (opc3 != 0);

    printf("\n");
    return 0;
}