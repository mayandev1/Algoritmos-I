#include <stdio.h>
#include <stdlib.h>

int main(){

    int termo1, termo2, proximo;

    printf("FETUCCINE\n");

    printf("Digite os dois primeiros termos:\n");
    scanf("%d %d", &termo1, &termo2);

    for (int i = 0; i <= 20; i++){
        printf("%d ", termo1);

        if (i % 2 == 0){
            proximo = termo1 - termo2;
        } else {
            proximo = termo1 + termo2;
        }
        
        termo1 = termo2;
        termo2 = proximo;

    }
    printf("\n");
    
    return 0;
}