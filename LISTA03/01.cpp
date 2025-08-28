#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 8

int main()
{
    int vetor[T], x, y, i, aux;
    srand(time(NULL));

    for(i = 0; i < T; i++)
    {
        vetor[i] = rand() % 100;
        printf("%2d ", vetor[i]);
    }

    do {
        printf("\nDigite o valor de X (0 a %d): ", T-1);
        scanf("%d", &x);
    } while(x < 0 || x >= T);

   
    do {
        printf("Digite o valor de Y (0 a %d): ", T-1);
        scanf("%d", &y);
    } while(y < 0 || y >= T);

  
    aux = vetor[x];
    vetor[x] = vetor[y];
    vetor[y] = aux;

    printf("\nPosicao do 01 elemento para troca: %d", x+1);
    printf("\nPosicao do 02 elemento para troca: %d\n", y+1);

    
    for(i = 0; i < T; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
