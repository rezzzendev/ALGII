#include <stdio.h>

int main() {
    int vetor[20];
    int i;

    printf("Vetores:\n");
    for(i = 0; i < 20; i++) {
        vetor[i] = i * 5;
        printf("%d Elemento do vetor|%d|\n", i+1, vetor[i]);
    }

    

    return 0;
}
