#include <stdio.h>

int main(void){

    int n, i;
    int cont = 0;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        cont = cont + (i*i);
    }

    printf("A expressao fatorial de %d eh %d", n, cont);

    return 0;
}
