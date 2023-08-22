#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	//Entrada
	char nome[10];
	int montante, i, vet1[5], vet2[5], total1, total2;
	
	//processamento
	printf("Digite o nome do vendedor: ");
	scanf("%s", &nome);
	//entrada de pocessamento
	for(i = 1; i <= 5; i++){

	printf("coloque o valor das últimas 5 vendas: ");
	scanf("%d", &montante);
	
	vet2[i] = + i;
	vet2[i] = montante;
	
	if(montante > 4000){
		montante = montante * 0.06;
	}else{
		montante = montante * 0.05;
	}
	vet1[i] + 1;
	vet1[i] = montante;
}
	//saída de processamento
	total1 = vet2[1] + vet2[2] + vet2[3] + vet2[4] + vet2[5];
	total2 = vet1[1] + vet1[2] + vet1[3] + vet1[4] + vet1[5];	
	printf("o montante é de: \n%d %d \n%d %d \n%d %d \n%d %d \n%d %d \n========== \n%d %d", vet2[1],vet1[1],vet2[2],vet1[2],vet2[3],vet1[3],vet2[4],vet1[4],vet2[5],vet1[5],total1, total2);
	//saída
return 0;
}
