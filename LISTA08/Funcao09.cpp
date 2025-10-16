#include<stdio.h>
#include<locale.h>

int solicita(float ValorCompra)
{
	setlocale(LC_ALL, "Portuguese");
	int escolha = 0;
	do{
	printf("1) A vista com 10%% de desconto\n");
	printf("2) 2 vezes (preco da etiqueta)\n");
	printf("3) 3 vezes com 3%% de juros (somente para compras acima de R$ 100,00.)\n");
	scanf("%d", escolha);
	}while(escolha != 1 || escolha != 2 || escolha !=3);
}

int main()
{
	float ValorCompra = 0;
	printf("Total da compra: ");
	scanf("%f", &ValorCompra);
	solicita(ValorCompra);
}
