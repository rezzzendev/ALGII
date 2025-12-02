#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	FILE *ArqLeitura, *ArqEscrita;
	int Valor, Quantidade;
	char NomeArquivo[100], String[100], Produto[100];
	printf("Digite o nome do arquivo: ");
	gets(NomeArquivo);
	ArqLeitura = fopen(NomeArquivo, "r");
	if(ArqLeitura == NULL)
	{
		printf("Impossível abrir o arquivo!");
		exit(1);
	}
	
	ArqEscrita = fopen("Escrita.txt", "w");
	if(ArqEscrita == NULL)
	{
		printf("Impossível abrir o arquivo!");
		exit(1);
	}
	
	while(fscanf(ArqLeitura, "%s %d %d", Produto, &Quantidade, &Valor) != EOF)
	{
		if(Quantidade == 10)
		printf("Produto: %s - Quantidade: %d - Valor: %d\n", Produto, Quantidade, Valor);
	}
	system("pause");
}

