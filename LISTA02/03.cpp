#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[5];
    int i;

    for (i = 0; i < 5; i++) {
        vetor[i] = pow(i, 3);
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
