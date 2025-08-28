#include <stdio.h>

int main() {
    int vetor[7];  
    int i;


    printf("Digite o vetor com notas:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0){
            vetor[i] = 0;
    }}
    
    printf("\nVetor tratado:");
    for (i = 0; i < 10; i++) {
        printf("|%d| ", vetor[i]); 
    }
    return 0;
}
