#include  <stdio.h>
//função que retorna a soma de dois parâmetros inteiros
int soma (int a, int b){
	return a + b;
}

int main() {
	int x = soma (10, 10);
	printf("A Soma de 10 + 10 = %d", x);
	return 0;
}

