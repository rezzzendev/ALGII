#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#define T 10
int main()
{
	int I, contadorA = 0, contadorB = 0;
	char gabarito[T] = {'D', 'E', 'F', 'A', 'C', 'D', 'D', 'E', 'A', 'B'};
	char alunoA[T], alunoB[T];
	setlocale(LC_ALL,"Portuguese");

    printf("Gabarito:\n");
	for(I=0; I<T ; I++)
	{
		printf("%c ", gabarito[I]);
	}
	
	printf("\nRespostas aluno 1:\n");
	for(I=0; I<T ; I++)
	{
	    //fflush(stdin);
		scanf(" %c", &alunoA[I]);
	    alunoA[I] = toupper(alunoA[I]);

	}
	
	printf("Respostas aluno 2:\n");
	for(I=0; I<T ; I++)
	{
		scanf(" %c", &alunoB[I]);
		alunoB[I] = toupper(alunoB[I]);
	}
	
	for(I = 0; I<T; I++){
	    if(alunoA[I] == gabarito[I]){
	        contadorA++;
	    }
	    if(alunoB[I] == gabarito[I]){
	        contadorB++;
	    }
	}
	
	
    printf("Nota aluno 1: %.2d \n", contadorA);
    printf("Nota aluno 2: %.2d \n", contadorB);

	return 0;
}