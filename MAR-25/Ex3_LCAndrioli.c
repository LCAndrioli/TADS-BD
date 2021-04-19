#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void referencia(char *name);

int main()
{
    char *nome = malloc(100*sizeof(char));
    int i;

    for ( i = 0; i < 100; i++)
    {
        nome[i] = NULL;
    }
    

    printf("\nDigite um nome: ");
    gets(nome);

    referencia(nome);


    return 0;
}

void referencia(char *name)
{
    int i, y, a[10], b, c, volta, temp;
    char *js = name, sobrenome[10];

    b=0;
    //pega a posicao dos espacos
    for ( i=0 ; i<strlen(name) ; i++ )
    {
        if( js[i] != ' ' )
        {
            //nao faz nada
        }
        else
        {
            a[b] = i;
            b++;
        }
    }
    b--;
    c=0;
    volta = 1;
    temp = a[b];
    //Arruma letras e abrevia nome
    for ( i=0 ; i<strlen(name) ; i++ )
    {
        if (i<a[b])
        {
            if( js[i] != ' ' )
            {
                //se volta == 1 primeiro nome
                if (volta==1)
                {
                    // se C estiver na primeira volta, inicio do nome, entao Uppercase
                    if (c==0)
                    {
                        js[i] = toupper(js[i]);
                        c++;
                    }
                    //se nao, lowercase
                    else
                    {
                        js[i] = tolower(js[i]);
                    }
                }
                //
                else
                {
                    if (c==0)
                    {
                        js[i] = toupper(js[i]);
                        c++;
                    }
                    else
                    {
                        js[i] = ' ';
                    }
                }
            }
            else
            {
                c=0;
                volta++;
            }
        }
        else
        {
            
            sobrenome[i-a[b]] = toupper(js[i]);
            js[i] = ' ';

        }
        
    }
    // junta a string e adiciona .
    for ( i=0 ; i<strlen(name) ; i++)
    {
        if (js[i]==' ')
        {
            for ( y=i+1; y<strlen(name) ; y++)
            {
                if(js[y]!=' '){
                    i++;
                    js[i] = js[y];
                    if(i != y){
                        js[y] = ' ';
                    }
                    i++;
                    js[i] = '.'; 
                    y = strlen(name) -1;
                }
            }
            
        }
        
    }
    
    printf(" - Referencia: ");
    //referencia

    for( i=0 ; sobrenome[i]; i++)
    {
        if(sobrenome[i]>64 && sobrenome[i]<91){
            printf("%c", sobrenome[i]);
        }
    }
    printf(", ");
    for ( i=0 ; i<temp; i++)
    {
        printf("%c", js[i]);
    }
    printf("\n\n");
}