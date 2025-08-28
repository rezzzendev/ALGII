#include <stdio.h>

int main()
{
    int vetorA[6], vetorB[6], i, j, soma[6];
    
    printf("Digite o vetor:\n");
    for(i = 0; i<6; i++){
        scanf("%i", &vetorA[i]);
    }
    vetorB[0] = vetorA[0];
    for(i = 0; i<6; i++){
            soma[i] = vetorB[i] + vetorA[i+1];
            vetorB[i+1] = soma[i];
        }
     printf("Resultado:\n");
    for(i = 0; i<6; i++){
        printf("%i ", vetorB[i]);
    }

    return 0;
}