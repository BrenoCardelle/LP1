#include <stdio.h>

int main(){

	Caixa* lista = NULL;
	Caixa* ult;

	for(;;){

		int n;
		scanf("%d", &n);
		if(n == -1){
			break;
		}

		Caixa* c = (Caixa*) malloc(sizeof(Caixa));
		(*c).valor = n;
		(*c).prox = NULL;
		
		if (lista == NULL){
			lista = c;
		} else { (*ult).prox = c;}
		
		ult = c;
	}
	return 0;
}

ou 

while(1){
	Caixa* novo = (Caixa*) malloc(sizeof(Caixa));
	if(cab == NULL){
		cab = novo;
	} else {
		ant->prox = novo;
	}
	ant = novo;
}
