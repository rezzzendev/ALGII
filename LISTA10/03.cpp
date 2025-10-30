#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void converter2inteiro(char *argv[], int ArgvInteiros[], int argc)
{
	int i = 0;
	for(i = 1; i<argc; i++)
	{
		ArgvInteiros[i] = atoi(argv[i]);			
	}
	//for(i = 1; i<argc; i++)
	//{	
	//	printf("%d", ArgvInteiros[i]);					
	//}
}

void maior_menor(int Vetor[], int argc, int *Max, int *Min)
{
	int i = 0;
	*Max = Vetor[1];
	*Min = Vetor[1];
	for(i = 1; i < argc; i++)
	{
		if(*Max < Vetor[i])
			*Max = Vetor[i];
		if(*Min > Vetor[i])
			*Min = Vetor[i]; 
	}
	printf("Maior valor: %d, Menor valor: %d", *Max, *Min);
}

int main(int argc, char *argv[])
{
	int i = 0, Maior = 0, Menor = 0, Inteiros[argc];

	converter2inteiro(argv, Inteiros, argc);
	maior_menor(Inteiros, argc, &Maior, &Menor);
}
