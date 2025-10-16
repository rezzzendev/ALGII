#include<stdio.h>
#include<locale.h>

int potencia(int Base, int Expoente)
{
	int I, Pot = 1;
	for(I = 1; I <= Expoente; I++)
	{
		Pot *= Base;
	}
	return Pot;
}

int main()
{
	int Valor1, Valor2;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a base e o expoente: ");
	scanf("%d %d", &Valor1, &Valor2);
	printf("O maior número é: %d\n", potencia(Valor1, Valor2));
}
