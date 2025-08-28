#include <stdio.h>
#include <math.h>

int main() {
    int vetorA[6], vetorB[6];
    int i, j, acertos = 0;

    printf("numeros sorteados");
    for (i = 0; i < 6; i++) {
       scanf("%i", &vetorA[i]);
    }
     printf("numeros apostados");
    for (i = 0; i < 6; i++) {
       scanf("%i", &vetorB[i]);
    }
     
    for(i = 0; i < 6; i++){
        for(j = 0; j<6; j++){
        if(vetorA[i] == vetorB[j]){
            acertos++;
            }
        }
    }
    
    if(acertos == 6)
        printf("\nGANHOU!");
    else if(acertos == 0)
        printf("\nNENHUM ACERTO!");
    else if (printf("Voce acertou %d numeros", acertos));
    
    return 0;
}
