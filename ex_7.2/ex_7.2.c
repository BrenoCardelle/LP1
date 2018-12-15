#include <stdio.h>

typedef struct Persona {
	char nome[20];
	int iniciativa;
	int armadura;
	int vida;
}Persona;

typedef struct Classe{
    char nome[20];
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
    printf("Entre com a classe do personagem: ");
    scanf("%s", &(*C).nome);
    preenche(&(*C).P);

}

int main(){
    Classe C1;
    preenche2(&C1);
    printf("\nClasse: %s \nNome: %s \nIniciativa: %d \nArmadura: %d \nVida: %d", C1.nome, C1.P.nome, C1.P.iniciativa, C1.P.armadura, C1.P.vida);

    return 0;
}
