#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[7];
    int i, x, y, soma;

    printf("Digite o vetor:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }
    printf("Escolha x: ");
    scanf("%d", &x);
    printf("\nEscolha y: ");
    scanf("%d", &y);

    soma = vetor[x] + vetor[y];
    
    printf("\nSoma = %d", soma);

    return 0;
}
