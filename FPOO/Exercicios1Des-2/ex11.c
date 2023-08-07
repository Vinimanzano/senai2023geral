/*9 Desenvolva um algortimo que faço o cálculo do reajuste salarial do funcionário, 
baseado nos seguintes parâmetros: 15% de aumento : 
1.500,00 <= salario Atual 
< 1.750,00 12% de aumento : 
1.750,00 <= salario Atual 
< 2.000,00 9% de aumento : 
2.000,00 <= salario Atual < 
3.000,00 6% de aumento : 
salario Atual >= 3.000,00*/
#include<stdio.h>
#include<string.h>
int main(void){
	char a[10];
	float b;
	
	printf("Reajuste salarial: \natual \naumento \n\n");
	printf("Inssira o aumento: ");
	scanf("%s", &a);
	
	printf("Insira o reajuste %s: R$", a);
	scanf("%f", &b);
	
	if(strcmp(a, "atual") == 0){
		b = b * 0.80;
		printf("o preco do reajuste com 12%% de aumento e R$%.2f", b);
	}else if(strcmp(a, "bermuda") == 0){
		b = b * 0.90;
		printf("O preco do reajuste com 9%% de aumento e R$%.2f", b);
	}else if(strcmp(a, "calca") == 0){
		b = b * 0.85;
		printf("O preco do reajuste com 6%% de aumento e R$%.2f", b);
	}else{
		printf("O aumento foi de:.");
	}
	return 0;
}