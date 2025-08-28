#include <stdio.h>

int main() {
    int vetor[8];
    int i, x, y, soma;

    printf("Informe os 8 numeros:\n");
    for(i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }
     do {
        printf("Informe x (0 a 8): ");
        scanf("%d", &x);
    } while(x < 0 || x > 7);
    
    do {
        printf("Informe y (0 a 8): ");
        scanf("%d", &y);
    } while(y < 0 || y > 7);

   
        soma = vetor[x] + vetor[y];
    
    printf("A soma e: %d", soma);

    return 0;
}
