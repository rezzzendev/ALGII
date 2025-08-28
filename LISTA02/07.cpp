#include <stdio.h>

int main() {
    int vetor[7];  
    int i, j;


    printf("Digite as temperaturas de Domingo a Sabado:\n");
    for (i = 0; i < 7; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("\nHistograma das temperaturas:\n");
    for (i = 0; i < 7; i++) {
        printf("Dia %d: ", i+1); 
        for (j = 0; j < vetor[i]; j++) {
            printf("%c", 220);  
        }
        printf("\n");
    }

    return 0;
}
