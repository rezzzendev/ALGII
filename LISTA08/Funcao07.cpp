#include<stdio.h>
#include<locale.h>

int maior(int A, int B, int C)
{
	int maior = 0;
	if(A > B)
		maior = A;
	else
		maior = B;
	if(C > maior)
	   maior = C;
	
	return maior;
}

int menor(int A, int B, int C)
{
	int menor = 0;
	if(A < B)
		menor = A;
	else
		menor = B;
	if(C < menor)
	   menor = C;
	
	return menor;
}

int main()
{
	int Valor1, Valor2, Valor3;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite tr�s n�meros: ");
	scanf("%d %d %d", &Valor1, &Valor2, &Valor3);
	printf("O maior n�mero �: %d\n", maior(Valor1, Valor2, Valor3));
	printf("O menor n�mero �: %d\n", menor(Valor1, Valor2, Valor3));
}
