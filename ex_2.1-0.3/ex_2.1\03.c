#include <stdio.h>

int main(void){

    float real, dolar;

    scanf("%f", &dolar);

    real = dolar * 3.17;

    if (real <= 1000){
        printf("Bom Negocio\n");
    } else {
        printf("Mau Negocio\n");
    }
    return 0;
}
