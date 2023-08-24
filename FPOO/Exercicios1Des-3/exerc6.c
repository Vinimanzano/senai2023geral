#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
//entrada
	int i;
	int repeticao;
	int numero;
	
    do{
	printf("Digite o valor inteiro positivo:");
    scanf("%d", &numero);
	
	for (i = 0; i <= numero; i++){
		if(i % 2){
			printf("%d\n" , i);
		}
	
	}
	printf("aperte 1 para repetir ou 0 para finalizar: \n");
	scanf("%d", &repeticao);
	}while (repeticao);

	return 0;
}
