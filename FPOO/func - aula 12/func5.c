#include  <stdio.h>
//fun��o que retorna a soma de dois par�metros inteiros
int soma (int a, int b, int c){
	return a + b + c;
}

int main() {
	int x = soma (84, 16, 100);
	printf("A Soma de 84 + 16 + 100 = %d", x);
	return 0;
}

