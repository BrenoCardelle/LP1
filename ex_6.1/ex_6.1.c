#include <stdio.h>

void preenche(int* vec, int n){

    for(int i = 0; i<n; i++){
        scanf("%d", &(*(vec+i)));
    }

}

float media(int *vec, int n){

    float cont = 0;
    for(int i = 0; i<n; i++){
        cont = cont + *(vec+i);
    }
    float med = cont/n;
    return med;
}

int main(){

    int n;
    float med;
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);
    int vec[100];
    preenche(vec, n);
    med = media(vec, n);

    printf("A media do vet eh: %f", med);

    return 0;
}
