#include <stdio.h>

int main() {
    int vetor[10];
    int i, j, numero, repetido;

    printf("Informe 10 numeros diferentes:\n");

    for (i = 0; i < 10; i++) {
        do {
            repetido = 0;
            scanf("%d", &numero);


            for (j = 0; j < i; j++) {
                if (vetor[j] == numero) {
                    printf("Erro! O numero %d ja existe no vetor.\n", numero);
                    repetido = 1;
                    break;
                }
            }
        } while (repetido == 1); 

        vetor[i] = numero;
    }

    
    printf("\nVetor final: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
