#include <stdio.h>

int main(void){
    int x, y;

    scanf("%d\n", &x);

    scanf("%d", &y);

    if (x < y){
        printf("%d eh o maior", y);
    }
    if (y < x){
        printf("%d eh o maior", x);
    }
    if (x == y){
        printf("%d e %d sao iguais", x, y);
    }

    return 0;
}
