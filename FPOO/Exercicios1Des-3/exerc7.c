#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int i, soma = 0;
	
	for(i = 0; i <= 100; i++){
		soma = soma + i;
	}
	printf("\n\n %d \n\n", soma);
	
	return 0;
}
