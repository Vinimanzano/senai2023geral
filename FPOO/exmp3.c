#include <stdio.h>
int main (){
	//entrada
	int a, resto; //Declara��o de vari�veis
	printf("Digite um numero inteiro: " );
	scanf("%d, &a");
	//processamento
	resto = a % 2;
	printf("Resto = %d",resto);
	//sa�da processada
	if(resto){
		printf("Impar");
	}else{
		printf("Par");
	}
	//sa�da
	return 0;
}
