#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO 10
int main()
{
	int I, J,PosicaoMenor;
	char Vetor[TAMANHO], Menor, Auxiliar;
	setlocale(LC_ALL,"Portuguese");

    printf("Informe as 10 letras\n");
	for(I=0; I<TAMANHO ; I++)
	{
		printf("Vetor[%d]: ",I);
		scanf(" %c",&Vetor[I]);
	}

	for(I=0; I<TAMANHO ; I++)
	{
		Menor = Vetor[I];
		PosicaoMenor = I;
		for(J=I+1; J<TAMANHO ; J++)
		{
			if(Vetor[J] < Menor)
			{
				Menor = Vetor[J];
				PosicaoMenor = J;
			}
		}
		Auxiliar = Vetor[I];
		Vetor[I] = Vetor[PosicaoMenor];
		Vetor[PosicaoMenor]=Auxiliar;
	}
	for(I=0; I<TAMANHO ; I++)
	{
		printf("%c ",Vetor[I]);
	}
	return 0;
}