#include <stdio.h>

void strjoin(char* d, char* o1, char* o2){
	int tam1, tam2;
	tam1 = strlen(o1);
	tam2 = strlen(o2);
	for(int i=0; i<tam1; i++){
        d[i] = o1[i];
	}
    for(int j=0; j<tam2; j++){
        d[j+tam1] = o2[j];
	}
	d[tam1+tam2] = '\0';
}

int main(){
	char d[20], o1[20], o2[40];
	printf("Entre com a primeira string: ");
	gets(o1);
	printf("Entre com a segunda string: ");
	gets(o2);
	strjoin(d, o1, o2);

	printf("Juntando as strings: %s", d);

	return 0;
}
