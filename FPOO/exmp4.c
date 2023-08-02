#include <stdio.h>
//*Programa que avalia médias de 0 a 100 (Aprovado se maior ou igual a 50)*
int main(){
	//Declaração de variáveis
	int media;
	//Etrada de dados
	printf("Digite a média final do aluno de 0 a 100:");
	scanf("%d", &media);
	//Processamento e saída com condicional
	if(media >= 50)
		printf("Aprovado");
	else
		printf("Reprovado");
	//Fim
	return 0;
}
