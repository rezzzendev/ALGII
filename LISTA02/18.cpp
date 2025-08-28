#include <stdio.h>
#include <math.h>

int main() {
    int vetorA[10], vetorB[10];
    int i;

    printf("Informe o vetor:\n");
    for (i = 0; i < 10; i++) {
       scanf("%i", &vetorA[i]);
    }
     
    for (i = 0; i < 10; i++) {
       vetorB[i] = pow(vetorA[i], 2);
    }
    
    for(i = 0; i < 10; i++)
        printf("|%d|", vetorB[i]);
    return 0;
}
