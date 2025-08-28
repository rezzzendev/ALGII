#include <stdio.h>

int main() {
    int Idade[10], Indices[10];
    int i, IdadePessoa;
    int flag = 0; 

    printf("Digite as idades:\n");
    for(i = 0; i < 10; i++) {
        scanf("%i", &Idade[i]);
    }

    printf("Digite a idade procurada:\n");
    scanf("%i", &IdadePessoa);
    
  
    for(i = 0; i < 10; i++) {
        if(Idade[i] == IdadePessoa) {
            Indices[flag] = i; 
            flag++;            
        }
    }

    if(flag > 0) {
        printf("Idade %d foi encontrada nas posições:\n", IdadePessoa);
        for(i = 0; i < flag; i++) {
            printf("%d\n", Indices[i]);
        }
    } else {
        printf("Idade não encontrada!\n");
    }

    return 0;
}
