#include <stdio.h>
#include <ctype.h>
#define T 13

int main() {
    
    int i;
    char NomeEmail[T] =  {'R','u','i',' ','D','i','a','s' ,' ','R','e','i','s'};
    
    printf("Plano de Teste\n");
    for(i = 0; i<T; i++){
        //fflush(stdin);
        printf(" %c", NomeEmail[i]);
    }
    for(i = 0; i<T; i++){
        if(isupper(NomeEmail[i])){
            NomeEmail[i] = tolower(NomeEmail[i]);
        }
        if(isspace(NomeEmail[i])){
            NomeEmail[i] = '_';
        }
    }
    printf("\n");
    for(i = 0; i<T; i++){
        printf("%c", NomeEmail[i]);
    }
    return 0;
}