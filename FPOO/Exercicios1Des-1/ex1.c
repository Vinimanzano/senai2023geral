#include <stdio.h>
int main (){
	//Declara��o de vari�veis
	int a, b, c, x;
	//Entrada
	printf("Digite tres numeros inteiros:");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	//Processamento
	x = (a + b ) / c;
	//sa�da
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf("O Resultado da expressao ( a + b ) / c = %d", x);
	return 0;
}
