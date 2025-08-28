#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[24];
    int i;

    for (i = 0; i < 24; i++) {
        if(i % 2 == 0){
            vetor[i] = 2;
        }else
            vetor[i] = 1;
    }
    printf("Vetor: ");
    for (i = 0; i < 24; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
