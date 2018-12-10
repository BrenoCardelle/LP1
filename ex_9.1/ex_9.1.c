#include <stdio.h>

int main(){
	
	int vet[5];
	for(int i=0; i<5; i++){
		scanf("%d", &vet[i]);
	}
	for(int i=0; i<4; i++){
	
		printf("%d; ", vet[i]);
	}
	printf("%d\n", vet[4]);
	int I;
	scanf("%d", &I);
	
	for(int i=I; i<4; i++){
		
		vet[i] = vet[i+1];
	}
	
	for(int i=0; i<3; i++){
	
		printf("%d; ", vet[i]);
	}
	printf("%d\n", vet[3]);
	
	return 0;
}
