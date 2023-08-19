#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
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
		if (IMC >= 19 && IMC <= 26){
			printf("Peso ideal (Parabéns!)\n");
		}
		if (IMC >= 26 && IMC <= 30){
			printf("Levemente acima do Peso\n");
		}
		if (IMC >= 30 && IMC <= 35){
			printf("Obesidade grau I\n");
		}
		if (IMC >= 35 && IMC <= 39){
			printf("Obesidade grau II (Severa)\n");
		}
		if (IMC >= 39 && IMC <= 50){
			printf("Obesidade grau III (Morbido)\n");
		}
			
		printf("para verificar novamente aperte 1, para fechar aperte 0.\n");
		scanf("%d", &decisao);
	}while(decisao);
	return 0;
}
