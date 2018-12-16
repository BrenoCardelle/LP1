#include <stdio.h>

typedef struct Persona {
	char nome[20];
	int iniciativa;
	int armadura;
	int vida;

}Persona;

typedef struct Classe{
    int classe;
    union{
	    int mago;
	    int guerreiro;
	};
    Persona P;
}Classe;

void preenche(Persona *name){

	printf("Entre com o nome do personagem: ");
	scanf("%s", &(*name).nome);
	printf("Entre com a iniciativa: ");
	scanf("%d", &(*name).iniciativa);
	printf("Entre com a armadura: ");
	scanf("%d", &(*name).armadura);
	printf("Entre com a vida: ");
	scanf("%d", &(*name).vida);
}

void preenche2(Classe *C){
    printf("Entre com a classe do personagem, 1 para mago e 2 para guerreiro: ");
    scanf("%d", &(*C).classe);
    if((*C).classe == 1){
        printf("Entre com a qntd de mana: ");
        scanf("%d", &(*C).mago);
    } else if((*C).classe == 2) {
        printf("Entre com a qntd de estamina: ");
        scanf("%d", &(*C).guerreiro);
    } else {
        printf("ERRO\n");
        return 0;
    }
    preenche(&(*C).P);

}

int main(){
    Classe C1;
    preenche2(&C1);
    if(C1.classe == 1){
        printf("\nClasse: Mago\nMana: %d \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", C1.mago, C1.P.nome, C1.P.iniciativa, C1.P.armadura, C1.P.vida);
    } else if(C1.classe == 2) {
        printf("\nClasse: Guerreiro\nEstamina: %d \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", C1.guerreiro, C1.P.nome, C1.P.iniciativa, C1.P.armadura, C1.P.vida);
    } else { printf("Tente outra vez."); }

    return 0;
}
