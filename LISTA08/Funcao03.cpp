#include<stdio.h>
#include<locale.h>

int menor(int A, int B)
{
	if(A > B)
		return B;
	else
		return A;
}

int main()
{
	int Valor1, Valor2;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite dois n�meros: ");
	scanf("%d %d", &Valor1, &Valor2);
	printf("O menor n�mero �: %d\n", menor(Valor1, Valor2));
}
