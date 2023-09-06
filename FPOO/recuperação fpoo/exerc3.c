#include <stdio.h> 
#include <locale.h> 
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota[2];
	float media;
	char nome[20];
	int i; 
	//Entrada
	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	for(i = 0; i < 2; i++){
		do{
			printf("Digite as nota: ", i + 1);
			scanf("%f", &nota[i]);
		}while(nota[i] < 0 || nota[i] > 10);
	}
	
	for(i = 0; i < 2; i++){
		media += nota[i];
		//Saída
		printf("Nota %d: %.1f\n", i + 1, nota[i]);
	}
	media /= 2;
	printf("%s sua média é %.1f\n", nome, media);
	
	if(media >= 5)
		printf("Aprovado");
	else
		printf("Reprovado");

	return 0;
}
