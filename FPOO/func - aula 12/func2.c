#include  <stdio.h>
//fun��o que retorna a soma de dois par�metros inteiros
int soma (int a, int b){
	return a + b;
}
//fun��o que retorna a m�dia de dois par�metros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

int main() {
	printf("A media de 84 + 16 / 2 = %d", media(84, 16));
	return 0;
}

