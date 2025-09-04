#include <stdio.h>
#include <ctype.h>
#define T 10

int main() {
    
    int i;
    char vetC[T], aux;
    
    printf("Informe os 4 caracteres:\n");
    for(i = 0; i<T; i++){
        //fflush(stdin);
        scanf(" %c", &vetC[i]);
    }
  
      for(i = 0; i<T; i++){
          if(i % 2 == 0 || i == 0){
              aux = vetC[i+1]; 
              vetC[i+1] = vetC[i];
              vetC[i] = aux;
          }
     }
     for(i = 0; i <T; i++){
         printf("%c", vetC[i]);
     }
    return 0;
}