#include <stdio.h>

typedef struct Personagem {
	char nome[20];
	int iniciativa;
	int armadura;
	int vida;
}PERSONA;

void preenche(PERSONA *name){

	printf("Entre com o nome do personagem: ");
	scanf("%s", &(*name).nome);
	printf("Entre com a iniciativa: ");
	scanf("%d", &(*name).iniciativa);
	printf("Entre com a armadura: ");
	scanf("%d", &(*name).armadura);
	printf("Entre com a vida: ");
	scanf("%d", &(*name).vida);
}

int main(){

	struct Personagem p1;
	preenche(&p1);
	printf("%s %d %d %d", p1.nome, p1.iniciativa, p1.armadura, p1.vida);

	return 0;
}

