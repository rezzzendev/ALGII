#include<stdio.h>
#include<locale.h>

int maior(int A, int B)
{
	if(A > B)
		return A;
	else
		return B;
}

int main()
{
	int Valor1, Valor2;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite dois números: ");
	scanf("%d %d", &Valor1, &Valor2);
	printf("O maior número é: %d\n", maior(Valor1, Valor2));
}
