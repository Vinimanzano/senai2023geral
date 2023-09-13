#include <stdio.h>
#include <locale.h>

void zeraElemento(int *ponteiro, int indice){
	setlocale(LC_ALL,"");
	ponteiro[indice] = -1;		
}

void nomeFunc(int *ponteiro, int n){
	int i;
	for(i = 0; i < n; i++)
		printf("%d\n",ponteiro[i]);
}

int main(){
	int numeros[] = {6, 5, 4, 3};
	zeraElemento(numeros,3); //troca a posiçao "3 do vetor" = "3" por -1 
	nomeFunc(numeros, 4);
	return 0;
}

// crie uma funçao que receba um vetor de numero e um numero qualquer e retorne a posiçao desde numero no vetor ou -1 se nao for encontrado (nome da funaçao busca).
