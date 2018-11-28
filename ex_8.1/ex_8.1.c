#include <stdio.h>
#include <string.h>

int main(){
	FILE* f = fopen("/Área de Trabalho/arq-01.txt", "w");
	int i;
	char str[25];
	int tam;
	scanf("%c", &str);
	tam = strlen(str);
	for(i=0; i<tam; i++){
		fputc(str[i], f);
	}
	fclose(f);
	
	return 0;
}
