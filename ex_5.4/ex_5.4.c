#include <stdio.h>

int troca(int* a, int* b){

    int aux = 0;
    aux = *a;
    *a = *b;
    *b = aux;

}


int main(){

    int x = 0, y = 0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    printf("\nAntes da troca: %d : %d\n",x,y);
    troca(&x,&y);
    printf("\nDepois da troca: %d : %d\n",x,y);

}
