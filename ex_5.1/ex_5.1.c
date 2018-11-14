#include <stdio.h>

int main(void){
	
	int a, b;
	int* p;
	scanf("%d \n %d", &a, &b);

	printf("a = %d, b = %d\n", a, b);
	if (a<=b){
		p=&b;
	} else { p=&a;}

	*p = *p - 50;
	
	printf("a = %d, b = %d \n", a, b);

	return 0;
}
