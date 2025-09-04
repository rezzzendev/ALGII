#include <stdio.h>
#include <ctype.h>
#define T 5

int main() {
    
    int i;
    char vetC[T], aux, menor;
    
    printf("Informe os 5 caracteres:\n");
    for(i = 0; i<T; i++){
        //fflush(stdin);
        scanf(" %c", &vetC[i]);
    }
  
      for(i = T; i>=0; i--){
          printf("%c", vetC[i]);
     }
    return 0;
}