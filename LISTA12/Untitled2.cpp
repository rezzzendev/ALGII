#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int i = 0, Quantidade = 0, Valor = 0, Total = 0;
	FILE *Arq, *Arq2;
	char String[100], NomeArquivo[100], Produto[100];
	printf("Digite o nome do arquivo: ");
	gets(NomeArquivo);
	Arq = fopen(NomeArquivo, "w");
	if(Arq ==  NULL)
	{
		printf("Impossível abrir o arquivo!");
		exit(1);
	}
	do{
		printf("Digite o produto: \n");
		fflush(stdin);
		gets(Produto);
		printf("Digite a quantidade: \n");
		scanf("%d", &Quantidade);
		printf("Digite o valor: \n");
		scanf("%d", &Valor);
		fprintf(Arq, "%s %d %d \n", Produto, Quantidade, Valor);
		
		if(ferror(Arq))
		{
		printf("Erro na gravação do arquivo");
		fclose(Arq);
		exit(1);
		}
	}while(Quantidade != 0);
	fclose(Arq);
	Arq = fopen(NomeArquivo, "r");
	while(fscanf(Arq, "%s %d %d", Produto, &Quantidade, &Valor)!= EOF)
	{
		printf("Produto:%s - Quantidade:%d - Valor:%d\n", Produto, Quantidade, Valor);
		Total += Valor;
	}
	printf("Valor Total da venda: %d", Total);
	fclose(Arq);
	system("pause");
	
}
