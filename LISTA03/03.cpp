#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define T 10

int main()
{
    int qtd, flag, i;
    printf("Digite quantos candidatos foram inscritos: ");
    scanf("%d", &qtd);
    
    int voto[qtd];
    for(i = 0; i<qtd; i++){
        printf("Voto candidato%d:  ", i+1);
        scanf("%d", &voto[i]);
    }
    for(i = 0; i < qtd; i++)
    {
        if(voto[0] >= voto[i])
        {
            flag = 1;
        }else
            flag = 0;

    }
    if(flag == 1)
        printf("\nCarlos foi eleito: SIM");
    else
        printf("\nCarlos foi eleito: NAO");
    
    return 0;
}
