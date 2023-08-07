#include <stdio.h>
int main (){
	//entrada
	int a, resto; //Declaração de variáveis
	printf("Digite um numero inteiro: " );
	scanf("%d, &a");
	//processamento
	resto = a % 2;
	printf("Resto = %d",resto);
	//saída processada
	if(resto){
		printf("Impar");
	}else{
		printf("Par");
	}
	//saída
	return 0;
}
