#include<stdio.h>
#include<locale.h>

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
	printf("Digite três números: ");
	scanf("%d %d %d", &Valor1, &Valor2, &Valor3);
	printf("O menor número é: %d\n", menor(Valor1, Valor2, Valor3));
}
