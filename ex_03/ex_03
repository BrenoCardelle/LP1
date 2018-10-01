#include <stdio.h>

int main(void){

    short temps[50];
    short cont = 0;
    short i;

    for(i=0; i<50; i++){
        scanf("\n %d", &temps[i]);
        cont += temps[i];
    }

    char media = cont/50;

    printf("media: %d\n", media);
    cont = 0;
    for (i=0; i<50; i++){
        if (temps[i] > media){
            printf("%d esta acima da media\n", temps[i]);
            cont += 1;
        }
    }

    printf("Qntd de temperaturas acima da media: %d", cont);

    return 0;
}
