//edit

#include <stdio.h>

void strjoin(char* d, char* o1, char* o2){
	int tam1, tam2, tamtotal;
	tam1 = strlen(o1);
	tam2 = strlen(o2);
	tamtotal = tam1+tam2;
	d[tamtotal]= *o1 + *o2;
}

int main(){
	char* d, o1, o2;
	printf("Entre com a primeira string: ");
	gets(o1);
	printf("Entre com a segunda string: ");
	gets(o2);
	
	strjoin(d, o1, o2);
	
	printf("Juntando as strings: %s", d);
}
