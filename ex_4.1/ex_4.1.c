#include <iostream>
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
		ver = true;
	}
	return ver;
}
		

int main(void){
	int n;
	scanf("%d", &n);
	if (eh_primo(n) == true){
		printf("eh primo\n");
	} else {
		printf("nao eh primo\n");
	}
		
	
	return 0;
}
