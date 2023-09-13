#include  <stdio.h>
//função que retorna a soma de dois parâmetros inteiros
int soma (int a, int b){
	return a + b;
}
//função que retorna a média de dois parâmetros inteiros
int media(int a, int b){
	return (a + b) / 2;
}

//Exemplo de um procedimento que escreve uma frase 100 vezes
int procedimentoBart(){
	int i;
	for(i = 0; i < 100; i++)
		printf("nao vou atormentar a Lisa\n");
}

int main() {
	procedimentoBart();
	procedimentoBart();
	return 0;
}
