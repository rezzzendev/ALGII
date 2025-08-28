#include <stdio.h>

int main() {
    int vetorA[9], vetorB[9];
    int i, j = 0;

    printf("Digite o vetorA:\n");
    for(i = 0; i < 9; i++) {
        scanf("%i", &vetorA[i]);
    }

 
    for(i = 0; i < 9; i++) {
        if(vetorA[i] > 0) {
            vetorB[j] = vetorA[i];
            j++;
        }
    }

    printf("Resultado:\n");
    for(i = 0; i < j; i++) {
        printf("%i ", vetorB[i]);
    }

    return 0;
}
