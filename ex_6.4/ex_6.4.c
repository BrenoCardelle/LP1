#include <stdio.h>

int strlen2 (char* str){
	int i=0;
	int tam = 0;
	while(str[i]!='\0'){
		tam+=1;
		i+=1;
	}
	return tam;
}

int main(){
	char str[]="abcde";
	int len2 = strlen2(str);
	printf("O tamanho da string eh: %d", len2);
	return 0;
}
