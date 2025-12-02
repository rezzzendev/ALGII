#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *Arq, *Arq2;
    char NomeArquivo[100], NomeOK[100];
    char c, prox;

    printf("Digite o nome do arquivo (sem .txt): ");
    gets(NomeArquivo);

    // monta nomes
    strcpy(NomeOK, NomeArquivo);
    strcat(NomeOK, "OK.txt");
    strcat(NomeArquivo, ".txt");

    Arq = fopen(NomeArquivo, "r");
    if(Arq == NULL)
    {
        printf("Impossível abrir o arquivo %s!\n", NomeArquivo);
        exit(1);
    }

    Arq2 = fopen(NomeOK, "w");
    if(Arq2 == NULL)
    {
        printf("Impossível criar o arquivo corrigido!\n");
        exit(1);
    }

    c = fgetc(Arq);

    while(c != EOF)
    {
        if(c == ',')
        {
            // grava a vírgula
            fputc(',', Arq2);

            // lê o próximo char
            prox = fgetc(Arq);

            if(prox != ' ' && prox != EOF)
            {
                fputc(' ', Arq2);  // insere espaço faltando
            }

            // grava o próximo caractere (se não for EOF)
            if(prox != EOF)
                fputc(prox, Arq2);
        }
        else
        {
            fputc(c, Arq2);
        }

        c = fgetc(Arq);
    }

    fclose(Arq);
    fclose(Arq2);

    printf("\nO texto foi corrigido e gravado no arquivo: %s\n", NomeOK);

    return 0;
}

