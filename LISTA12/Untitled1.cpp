#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define TAM 100

int main()
{
    setlocale(LC_ALL, "Portuguese");

    FILE *ArqEntrada, *ArqSaida;
    char NomeArq[TAM], String[TAM], Palavra[TAM], PalavraTroca[TAM];
    char Caracter;
    char StringAux[TAM];
    int I = 0;

    printf("Digite o nome do arquivo: ");
    gets(NomeArq);

    ArqEntrada = fopen(NomeArq, "r");
    if (ArqEntrada == NULL)
    {
        printf("Não consigo abrir o arquivo!\n");
        exit(1);
    }

    printf("Digite a palavra a ser procurada: ");
    gets(Palavra);

    printf("Digite a palavra substituta: ");
    gets(PalavraTroca);

    ArqSaida = fopen("resultado.txt", "w");

    Caracter = fgetc(ArqEntrada);

    while (Caracter != EOF)
    {
        if (Caracter != ' ' && Caracter != '\n' && Caracter != ',' && Caracter != '.')
        {
            StringAux[I] = Caracter;
            I++;
        }
        else
        {
            StringAux[I] = '\0';

            if (stricmp(StringAux, Palavra) == 0)
            {
                fputs(PalavraTroca, ArqSaida);
            }
            else
            {
                fputs(StringAux, ArqSaida);
            }

            fputc(Caracter, ArqSaida);
            I = 0;
        }

        Caracter = fgetc(ArqEntrada);
    }

    // última palavra sem separador
    if (I > 0)
    {
        StringAux[I] = '\0';
        if (stricmp(StringAux, Palavra) == 0)
            fputs(PalavraTroca, ArqSaida);
        else
            fputs(StringAux, ArqSaida);
    }

    fclose(ArqEntrada);
    fclose(ArqSaida);

    printf("\nArquivo 'resultado.txt' criado com sucesso!\n");

    return 0;
}

