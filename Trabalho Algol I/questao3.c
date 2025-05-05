#include <stdio.h>
#include <stdlib.h>

int main(){
    int cont = 10;
    
    printf("MULTIPLOS DE 3:\n");

    while (cont <= 30){
        if (cont % 3 == 0){
            printf("%d\n", cont);
        }
        
        cont++;
    }
    
    return 0;
}