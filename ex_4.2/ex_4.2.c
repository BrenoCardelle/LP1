#include <stdio.h>

int eh_primo(int v){
	int i, ver;
	int cont=0;
	for(i=v; i>=1;i--){
		if (v%i==0){
			cont+=1;
		}
	}
	if (cont==2){
		return 1;
	}
}

int todos_os_primos(int max){

    int i, ver,cont;
    int vet[max];
    for(i=0; i<=max; i++){
        ver = eh_primo(i);
        vet[cont] = ver;
        cont+=1;
    }
    return *vet;
}


int main(void){
	int n, primos;
	scanf("%d", &n);
	primos = todos_os_primos(n);
	printf("Os primos de 1 ate %d sao %d", n, primos);


	return 0;
}
