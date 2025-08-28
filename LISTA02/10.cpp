#include <stdio.h>

int main()
{
    int vetorA[5], vetorB[5], vetorC[10], i, j = 0;

    printf("Digite o vetorA:\n");
    for(i = 0; i < 5; i++){
        scanf("%i", &vetorA[i]);
    }

    printf("Digite o vetorB:\n");
    for(i = 0; i < 5; i++){
        scanf("%i", &vetorB[i]);
    }


    for(i = 0; i < 5; i++){
        vetorC[j++] = vetorA[i];
        vetorC[j++] = vetorB[i];
    }

    printf("Resultado:\n");
    for(i = 0; i < 10; i++){
        printf("%i ", vetorC[i]);
    }

    return 0;
}
