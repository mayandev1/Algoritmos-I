#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int i = 1;
    
    printf("MULTIPLOS DE 5:\n");

    while (i < 100){
        if (i % 5 == 0){
            printf("%d\n", i);
        }
        
        i++;
    }
    
    return 0;
}