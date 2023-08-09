#include<stdio.h>
int main(){
	float preco;
	
	printf("Entre o preco do produto: R$");
	scanf("%f", &preco);
	
	if(preco > 1000){
		preco = preco * 0.92;
<<<<<<< HEAD
	}
		printf("O preco do produto com desconto de 8%% e de R$%.2f", preco);
=======
	}		
		printf("O preco final do produto com desconto = 8%% e de R$%.2f", preco);
>>>>>>> 9600737579984fee4a05b1cf131f631d8bbb5454
	
	return 0;
}
