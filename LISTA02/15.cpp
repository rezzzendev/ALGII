#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;
    int encontrou = 0;

  
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nValores repetidos: ");
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d ", vetor[i]);
                encontrou = 1;
                break; 
            }
        }
    }

    if (encontrou == 0) {
        printf("\nNao existem valores iguais.");
    }

    return 0;
}
