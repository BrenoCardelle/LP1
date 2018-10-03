#include <stdio.h>

int main(void){

    int x;
    int cont = 0;

    scanf("%d", &x);

    while(x != 0){
        cont = cont + x;
        x = 0;
        scanf("%d", &x);
    }

    printf("a soma dos numeros eh: %d", cont);

    return 0;
}
