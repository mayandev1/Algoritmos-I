#include <stdio.h>
#include <stdlib.h>

int main(){

    int termo1 = 0, termo2 = 1, proximo;

    printf("FIBONACCI\n");

    for (int i = 0; i <= 20; i++){
        printf("%d ", termo1);

        proximo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximo;
    }
    printf("\n");
    
    return 0;
}