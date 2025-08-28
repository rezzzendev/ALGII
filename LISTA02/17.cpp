#include <stdio.h>

int main() {
    int vetorA[10], vetorB[10], resultado[10];
    int i;

    printf("Informe o vetorA:\n");
    for (i = 0; i < 10; i++) {
       scanf("%i", &vetorA[i]);
    }
    printf("Informe o vetorB:\n");
    for (i = 0; i < 10; i++) {
       scanf("%i", &vetorB[i]);
    }
    for(i = 0; i < 10; i++)
        resultado[i] = vetorA[i] + vetorB[i];
    for(i = 0; i < 10; i++)
        printf("|%d|", resultado[i]);
    return 0;
}
