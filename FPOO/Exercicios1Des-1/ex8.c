#include <stdio.h>
int main (){
	//Declara��o de vari�veis
	int raio, altura;
	int area, volume;
	int pi = 3;
	//Entrada
	printf("Digite o Raio de um cilindro em cm:");
	scanf("%d", &raio);
	printf("O Raio = %d", raio);
	printf("Digite a altura do cilindro em cm:");
	scanf("%d", &altura);
	//processamento
	float areaLat = 2 * pi * raio * altura;
	float areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
	//saida
	printf("Raio = %d\n", raio);
	printf("Altura = %d\n", altura);
	printf("A area do Silindro = %d\n", area);
	printf("Volume do Cilindro = %d\n", volume);
	return 0;
}
