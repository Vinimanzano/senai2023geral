#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");

   int n1, n2, n3;

	printf("Digite o primeiro número: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%d", &n2);

	printf("Digite o terceiro número: ");
	scanf("%d", &n3);

	int sum = n1 + n2 + n3;
	int media = sum / 3;
	int produto = n1 * n2 * n3;

	printf("A soma de %d + %d + %d = %d\n", n1, n2, n3, sum);
	printf("A média de %d é = %d\n", sum, media);

   return 0;

}
