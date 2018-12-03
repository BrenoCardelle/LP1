#include <stdio.h>
#include <string.h>

int main(){
	FILE* f = fopen("/tmp/arq-01.txt", "w");
	int i;
	char str[25];
	int tam;
	scanf("%s", &str);
	tam = strlen(str);
	for(i=0; i<tam; i++){
		fputc(str[i], f);
	}
	fclose(f);
	printf("\n%s\n", str);
	printf("%d\n", tam);
	
	return 0;
}
