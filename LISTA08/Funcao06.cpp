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
	printf("Digite dois números: ");
	scanf("%d %d", &Valor1, &Valor2);
	if(multiplo(Valor1, Valor2) == 1)
	{
		printf("O número %d é múltiplo do número %d\n", Valor1, Valor2);
	}
	else
	{
		printf("O número %d não é múltiplo do número %d\n", Valor1, Valor2);	
	}
	
}
