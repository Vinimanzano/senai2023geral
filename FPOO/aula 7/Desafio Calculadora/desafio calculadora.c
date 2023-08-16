#include <stdio.h>
int main(){
	char cliente[10];
    float peso;
    float altura;
    float IMC;
    int decisao;

	do{
	    printf("Digite o nome do cliente: ");
	    scanf("%s", &cliente);
		
		printf("digite sua altura: ");
		scanf("%f", &altura);
		
		printf("digite seu peso: ");
		scanf("%f", &peso);
	
		IMC = peso/(altura*altura);
		printf("O IMC e igual a %f\n", IMC);
		
		if (IMC <= 18){
			printf("Abaixo do peso\n");	
		}
		if (IMC >= 19 && IMC <= 25){
			printf("Peso ideal (Parabens!)\n");
		}
		if (IMC >= 26 && IMC <= 29){
			printf("Levemente acima do Peso\n");
		}
		if (IMC >= 30 && IMC <= 34){
			printf("Obesidade grau I\n");
		}
		if (IMC >= 35 && IMC <= 39){
			printf("Obesidade grau II (Severa)\n");
		}
		if (IMC >= 39 && IMC <= 40){
			printf("Obesidade grau III (Morbido)\n");
		}
			
		printf("para verificar novamente aperte 1, para fechar aperte 0.\n");
		scanf("%d", &decisao);
	}while(decisao);
	return 0;
}
