#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 10, multi;

    while (i <= 30){
        multi = i * i;
        printf("%d\n", multi);
        i++;
    }
    
    return 0;
}