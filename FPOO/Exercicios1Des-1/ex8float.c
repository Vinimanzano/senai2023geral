#include <stdio.h>
int main (){
	//Declaração de variáveis
	float raio, altura;
	float area, volume;
	float pi = 3.14;
	//Entrada
	printf("Digite o Raio de um cilindro em cm:");
	scanf("%f", &raio);
	printf("O Raio = %d", raio);
	printf("Digite a altura do cilindro em cm:");
	scanf("%f", &altura);
	//processamento
	float areaLat = 2 * pi * raio * altura;
	float areaBase = 2 * pi * raio * raio;
	area = areaLat + areaBase;
	//saida
	printf("Raio = %f\n", raio); //pode-se usar desta meneira também  ( printf("Raio = %.2f\n", raio);
	printf("Altura = %f\n", altura); //pode-se usar desta meneira também printf ("Altura = %.2f\n", altura);
	printf("A area do cilindro = %f\n", area); //pode-se usar desta meneira também ( printf ("A area do Silindro = %.3f\n", area);
	printf("Volume do cilindro = %f\n", volume); //pode-se usar desta meneira também (printf ("Volume do Cilindro = %.3f\n", volume);
	return 0;
}
