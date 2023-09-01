#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"");
	char nome[20], produto[20][20];
	int produtos, i;
	float preco[20], margem[20], porcentagem;
	
	printf("Qual o nome do vendedor: ");
	scanf("%s", &nome);
	
	printf("Quantidade de produtos comprador por %s: ", nome);
	scanf("%d", &produtos);
	
	for(i = 1; i <= produtos; i++){
		printf("\nProduto %d: ", i);
		scanf("%s", &produto[i]);
		
		printf("Custo %s : ", produto[i]);
		scanf("%d", &margem[i]);
		
		porcentagem = porcentagem + margem[i];
	}
	
	for(i = 1; i <= produtos; i++){
		preco[i] = (margem[i] / porcentagem) * 75;
	}
	
	printf("Produto\tPreço\n");
	
	for(i = 1; i <= produtos; i++){
		printf("%s\t\t%.1f%%\n", produto[i], preco[i]);
	}
	
	return 0;
}
