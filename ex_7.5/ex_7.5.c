#include <stdio.h>

typedef struct Posicao{
    int x;
    int y;
}Posicao;

typedef struct Persona{
    int id;
    int pontos;
    Posicao Pos;
}Persona;

typedef struct Tab{
	int personagem;
	Posicao P;
}Tab; 

void preenche(Persona *P){
    printf("Entre com a id do personagem: ");
    scanf("%d", &(*P).id);
    printf("Entre com a pontuacao do personagem: ");
    scanf("%d", &(*P).pontos);
    printf("Entre com a posicao do personagem: ");
    scanf("%d %d", &(*P).Pos.x, &(*P).Pos.y);

}

int tab(Persona *V){
	Tab casa[10];
	printf("\n  1 2 3 4 5 6 7 8 9 10\n");
	for(int i=1; i<=10; i++){
		if(V[i+2] == i){
			printf("%d",i);
			aux1 = 2*i-1;
		}
		
			
				

}

int main(){

    Persona todos[10];
    Persona p0;
    preenche(&p0);
    todos[0] = p0;
    for(int i=1; i<10; i ++){
        Persona pi;
        preenche(&pi);
        todos[i] = pi;
        /*if(pi.id == p(i-1).id){
            printf("ERRO!");
            return 0;
        }*/
    }
    for(int i=0; i<10; i++){
        printf("\nID: %d \nPontuacao: %d \nPosicao: %d,%d \n", todos[i], todos[i], todos[i], todos[i]);
    }

    return 0;
}
