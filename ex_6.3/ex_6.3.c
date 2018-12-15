#include <stdio.h>

typedef struct Pontos{
    int x;
    int y;

}Pontos;

void preenche(Pontos *ponto){
    int x,y;
    scanf("%d %d", &(*ponto).x, &(*ponto).y);

}

void preenche_vet(int *vet){
    for(int i=0; i<20; i+=2){
        Pontos pi;
        preenche(&pi);
        vet[i] = pi.x;
        vet[i+1] = pi.y;
    }
}

int mais_distante(int *vet){
    int maior = 0;
    int cont;
    int ver;
    for(int i=0; i<20; i+=2){
        cont = (vet[i])*(vet[i]) + (vet[i+1])*(vet[i+1]);
        if (maior <= cont){
            maior = cont;
            ver = i;
        }
    }
    return ver;
}

int main(){
    int vec[20];
    preenche_vet(vec);
    int ponto;
    ponto = mais_distante(vec);
    printf("\n%d,%d\n", vec[ponto], vec[ponto+1]);

    return 0;
}
