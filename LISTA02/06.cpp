#include <stdio.h>

int main() {
    double vetor[8];
    int i;
    double aux;

    printf("Digite os numeros:\n");
    for (i = 0; i < 8; i++) {
        scanf("%lf", &vetor[i]);
    }


    for (i = 0; i < 4; i++) {
        aux = vetor[i];
        vetor[i] = vetor[i + 4];
        vetor[i + 4] = aux;
    }

  
    printf("\nVetor 2:\n");
    for (i = 0; i < 8; i++) {
        printf("%.1lf ", vetor[i]);
    }

    return 0;
}


