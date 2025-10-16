#include<stdio.h>
#include<locale.h>

#define T 5
typedef char String[100];
float desconto(float Valor, float Desconto)
{
	float ValorTotal = 0;
	ValorTotal = Valor - (Valor * (Desconto/100));
	return ValorTotal;
}

int main()
{
	int i = 0;
	String Produtos[T];
	float Precos[T], Desconto = 0, TotalSem = 0, TotalCom = 0, Diferenca = 0, Total = 0;
	setlocale(LC_ALL, "Portuguese");
	for(i = 0; i < T; i++)
	{
		printf("%do Produto", i+1);
		printf("\nProduto: ");
		fflush(stdin);
		gets(Produtos[i]);	
		printf("Preço: ");
		scanf("%f", &Precos[i]);
		TotalSem += Precos[i];
	}
	printf("\nDigite o valor do desconto: ");
	scanf("%f", &Desconto);
	printf("\nPreços com desconto:\n");
	for(i = 0; i < T; i++)
	{
		printf("%s : %.2f\n", Produtos[i], desconto(Precos[i], Desconto));
		TotalCom += desconto(Precos[i], Desconto);
	}
	Total = TotalSem - TotalCom;	
	printf("\nDiferença: %.2f", Total);
}
