#include <stdio.h>

//variáveis globais
FILE *entrada, *saida;
char in[] = "portas.in"
char out[] = "portas.out"


int total, i, j;

void mostrarPortas(int *portas){

	for(i = 0; i < total; i++){
		if (portas[i])
			printf("Porta %d aberto\n", i + 1);
		else
			printf("Porta %d fechada\n", i + 1);
	}
}

void formartaSaida(int *portas){

	for(i = 0; i < total; i++){
		if (portas[i])
			fprintf(saida, "%d ", i + 1);
	}
		fprintf("\n");
}

void solucao(int total){
	int portas[total];

	//Iniciei as portas
	for(i = 0; i < total; i++)
		portas[i] = 1;
		
	//Alterar os status das portas
	for(i = 2; i <= total; i++){
		
		for(j = i; j < total; j+=i)
			if(portas[j-1]) portas[j-1] = 0;
			else portas[j] = 1;		
	}

	
	//Mostrar na tela
	mostrarPortas(portas);
	//Gravar a saida formatada no arquivo
	formartaSaida(portas);
}


int main(){

	}
	return 0;
	
}
