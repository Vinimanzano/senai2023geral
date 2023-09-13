#include  <stdio.h>
#include <locale.h>

//Procedimento que escreve uma frase N vezes
int frases(char frase[], int n){
		setlocale(LC_ALL,"")
	int i;
	for(i = 0; i < n; i++)
		printf("%s\n", frase);
}
int main(){
	frases("Palmeiras não tem mundial", 5);
	return 0;
}
