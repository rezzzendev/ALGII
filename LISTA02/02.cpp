#include <stdio.h>

int main() {
    int vetor[100];
    int i;

    for (i = 0; i < 100; i++) {
        vetor[i] = 2 * i + 1;
    }
    for (i = 0; i < 100; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
