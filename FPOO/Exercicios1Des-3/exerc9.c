#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"");
	int num, x;
	
	printf("Insira um numero: ");
	scanf("%d", &num);
	
	for(x = 0; x <= 10; x++){
		printf("%dx%d = %d\n", num, x, num * x);
	}
	
	
	return 0;
}
