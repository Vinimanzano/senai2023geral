#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
//entrada
	
	int i;
	int repeticao;
	int usuario;
	do{
	printf("Digite um valor inteiro positivo: ");
	scanf("%d", &usuario);
	
	
	for (i= 0; i<= usuario; i+=2){
		printf("%d\n" , i);
	}
	printf("aperte 1 para repetir ou 0 para finalizar: \n");
	scanf("%d", &repeticao);
	}while (repeticao);

	return 0;
}
