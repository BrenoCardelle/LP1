#include <stdio.h>

int main(void){

    int n1, n2, cont, i;
    scanf("%d\n", &n1);
    scanf("%d", &n2);
    cont = n1 - n2;
    if(cont<0){
        cont = cont * -1;
    }
    for(i=1; i<cont; i++){
        if(n1<n2){
            printf("%d ", n1+i);
        } else {
            printf("%d ", n2+i);
        }
    }
    return 0;
}
