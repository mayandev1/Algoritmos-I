#include <stdio.h>
#include <stdlib.h>

int main(){
    int somatorio = 0;
    
    for (int i = 20; i <= 60; i++){
        somatorio += i;
        printf("%d\n", somatorio);
    }
    
}