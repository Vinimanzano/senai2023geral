#include <stdio.h>
//*Programa que avalia m�dias de 0 a 100 (Aprovado se maior ou igual a 50)*
int main(){
	//Declara��o de vari�veis
	int media;
	//Etrada de dados
	printf("Digite a m�dia final do aluno de 0 a 100:");
	scanf("%d", &media);
	//Processamento e sa�da com condicional
	if(media >= 50)
		printf("Aprovado");
	else
		printf("Reprovado");
	//Fim
	return 0;
}
