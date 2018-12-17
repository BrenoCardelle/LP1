#include <stdio.h>

typedef struct Classe{
    int classe;
    union{
	    int mago;
	    int guerreiro;
	};
}Classe;

typedef struct Persona {
	char nome[20];
	int iniciativa;
	int armadura;
	int vida;
    Classe Cl;
}Persona;

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

void preenche2(Persona *P){
    printf("Entre com a classe do personagem, 1 para mago e 2 para guerreiro: ");
    scanf("%d", &(*P).Cl.classe);
    if((*P).Cl.classe == 1){
        printf("Entre com a qntd de mana: ");
        scanf("%d", &(*P).Cl.mago);
    } else if((*P).Cl.classe == 2) {
        printf("Entre com a qntd de estamina: ");
        scanf("%d", &(*P).Cl.guerreiro);
    } else {
        printf("ERRO\n");
        return 0;
    }
    preenche(&(*P));

}

int main(){
    Persona P1;
    preenche2(&P1);
    if(P1.Cl.classe == 1){
        printf("\nClasse: Mago\nMana: %d \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", P1.Cl.mago, P1.nome, P1.iniciativa, P1.armadura, P1.vida);
    } else if(P1.Cl.classe == 2) {
        printf("\nClasse: Guerreiro\nEstamina: %d \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", P1.Cl.guerreiro, P1.nome, P1.iniciativa, P1.armadura, P1.vida);
    } else { printf("Tente outra vez."); }
    return 0;
}

