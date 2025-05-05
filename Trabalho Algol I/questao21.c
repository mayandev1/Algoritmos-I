#include <stdio.h>
#include <stdlib.h>

int main(){

    int termo1, termo2, proximo;

    printf("RICCI\n");

    printf("Digite os dois primeiros termos:\n");
    scanf("%d %d", &termo1, &termo2);

    for (int i = 0; i <= 20; i++){
        printf("%d ", termo1);

        proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }
    printf("\n");
    
    return 0;
}