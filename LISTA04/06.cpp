#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define TAMANHO 14
int main()
{
	int I;
	char Vetor[TAMANHO];
	setlocale(LC_ALL,"Portuguese");

    printf("Informe o CPF:\n");
	for(I=0; I<TAMANHO ; I++)
	{
		scanf(" %c",&Vetor[I]);
	}
	
	for(I = 0; I<3; I++){
	    Vetor[I] = '#';
	}
	for(I = 12; I<TAMANHO; I++){
	    Vetor[I] = '#';
	}

    printf("CPF convertido:\n");
	for(I=0; I<TAMANHO ; I++)
	{
		printf("%c ",Vetor[I]);
	}
	return 0;
}