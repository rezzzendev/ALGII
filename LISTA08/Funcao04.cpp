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

int main()
{
	int Valor1, Valor2, Valor3;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite três números: ");
	scanf("%d %d %d", &Valor1, &Valor2, &Valor3);
	printf("O maior número é: %d\n", maior(Valor1, Valor2, Valor3));
}
