#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

   int n1, n2;

	printf("Digite o primeiro n�mero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%d", &n2);
	
	int sum = n1 + n2;
	int produto = n1 * n2;

	printf("A soma de %d + %d = %d\n", n1, n2, sum);

   return 0;

}
