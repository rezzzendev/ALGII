#include <stdio.h>
#include <math.h> 

int main() {
    int vetor[20];
    int i;

    for (i = 0; i < 20; i++) {
        if(i < 10){
            vetor[i] = 0;
        }else
            vetor[i] = 1;
    }
    printf("Vetor: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}
