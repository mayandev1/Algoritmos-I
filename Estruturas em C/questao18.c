#include <stdio.h>
#include <stdlib.h>

int main(){
  
    int n, triangular = 0;

    printf("Digite quantos numeros triagulares deseja ver:\n");
    scanf("%d", &n);

    printf("OS PRIMEIROS NUMEROS TRIANGULARES SAO:\n");
    
    for (int i = 1; i <= n; i++){
        triangular = i * (i + 1) / 2;
        printf("%d ", triangular);
    }
    
    printf("\n");
    return 0;
}