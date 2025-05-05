#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, num = 1;
    
    printf("Digite quantos numeros a piramide tera:\n");
    scanf("%d", &n);

    for (int i = 1; num <= n; i++){
        for (int j = 1; j <= i && num <= n; j++){
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    

}