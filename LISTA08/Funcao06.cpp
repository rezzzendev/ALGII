#include<stdio.h>
#include<locale.h>

int multiplo(int A, int B)
{
	if(A % B == 0)
		return 1;
	else
		return 0;		
}

int main()
{
	int Valor1, Valor2;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite dois n�meros: ");
	scanf("%d %d", &Valor1, &Valor2);
	if(multiplo(Valor1, Valor2) == 1)
	{
		printf("O n�mero %d � m�ltiplo do n�mero %d\n", Valor1, Valor2);
	}
	else
	{
		printf("O n�mero %d n�o � m�ltiplo do n�mero %d\n", Valor1, Valor2);	
	}
	
}
