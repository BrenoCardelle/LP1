#include <stdio.h>

struct Caixa {
	int valor;
	struct Caixa* prox;
};

int main(){
	
	struct Caixa c1, c2, c3, c4, c5;
	scanf("%d", &(c1.valor));
	scanf("%d", &(c2.valor));
	scanf("%d", &(c3.valor));
	scanf("%d", &(c4.valor));
	scanf("%d", &(c5.valor));
	c1.prox = &c2;
	c2.prox = &c3;
	c3.prox = &c4;
	c4.prox = &c5;
	c5.prox = NULL;
	
	struct Caixa* lista = &c1;
	
	printf("%d -> %d -> %d -> %d -> %d\n", (*lista).valor, (*(*lista).prox).valor, (*(*(*lista).prox).prox).valor, (*(*(*(*lista).prox).prox).prox).valor, (*(*(*(*(*lista).prox).prox).prox).prox).valor);
	
	return 0;
}
