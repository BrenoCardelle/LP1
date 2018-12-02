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
	} else { return 0;}
}

int todos_os_primos(int max){

    int i;
    int cont = 0;
    for(i=1; i<=max; i++){
        if(eh_primo(i)==1){
            printf("%d ", i);
        }
        cont+=1;
    }
    return 0;
}


int main(void){
	int n;
	scanf("%d", &n);
	printf("Os primos de 1 ate %d sao ", n);
	todos_os_primos(n);

	return 0;
}
