#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Portuguese");
	char Ping[11];
	int i = 0, Teste = 0;
	strcpy(Ping, argv[1]);
	for(i = 1; i<argc; i++)
	{
		if(isdigit(Ping[0]) && isdigit(Ping[1]) && isdigit(Ping[2]) && isdigit(Ping[4]) && isdigit(Ping[5]) && isdigit(Ping[6]) && isdigit(Ping[8]) && isdigit(Ping[10])
		&& ispunct(Ping[3]) && ispunct(Ping[7]) && ispunct(Ping[9]))
			Teste = 1;		
	}
	printf("%s\n", Ping);
	if(Teste == 1)
		printf("É ip");
	else
		printf("Não é ip");
}
