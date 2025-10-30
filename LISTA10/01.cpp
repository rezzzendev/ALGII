#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(int argc, char *argv[])
{
	system("cls");
	int i = 0, Soma = 0, Numeros = 0;
	for(i = 1; i<argc; i++)
	{
		Numeros = atoi(argv[i]);
		Soma += Numeros;
	}
	printf("Soma: %d", Soma);
}
