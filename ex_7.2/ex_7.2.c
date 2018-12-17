#include <stdio.h>

typedef struct Classe{
    char nome[20];
}Classe;

typedef struct Persona {
	char nome[20];
	int iniciativa;
	int armadura;
	int vida;
	Classe C;
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
    printf("Entre com a classe do personagem: ");
    scanf("%s", &(*P).C.nome);
    preenche(&(*P));

}

int main(){
    Persona C1;
    preenche2(&C1);
    printf("\nClasse: %s \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", C1.C.nome, C1.nome, C1.iniciativa, C1.armadura, C1.vida);

    return 0;
}
