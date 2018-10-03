#include <stdio.h>

int main(void){

    float kph, mph;

    scanf("%f", &mph);

    kph = mph * 1.6;

    if (kph < 80){
        printf("Acelere");
    } else if(kph > 100){
        printf("Reduza");
    } else {
        printf("Mantenha");
    }

    return 0;
}
