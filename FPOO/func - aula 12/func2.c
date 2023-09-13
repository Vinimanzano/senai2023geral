#include  <stdio.h>
//função que retorna a soma de dois parâmetros inteiros
int soma (int a, int b){
	return a + b;
}
//função que retorna a média de dois parâmetros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

int main() {
	printf("A media de 84 + 16 / 2 = %d", media(84, 16));
	return 0;
}

