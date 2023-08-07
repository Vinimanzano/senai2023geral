#include<stdio.h>
int main(){
	float preco;
	
	printf("Entre o preco do produto: R$");
	scanf("%f", &preco);
	
	if(preco > 1000){
		preco = preco * 0.92;
	}
		printf("O preco do produto com desconto de 8%% e de R$%.2f", preco);
	
	return 0;
}