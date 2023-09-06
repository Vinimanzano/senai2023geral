#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL,"");
	
	int x1 = 10;
	int y1 = 10;
	int x2 = (20 + 10) * -1;
	int y2 = 110 - 10 / y1;
	
	if(x1 < x2)
		printf("X1 à esquerda ");
	else if(x1 == x2)
		printf("Mesmo ponto horizontal");
	else
		printf("X1 à direita, ");
		
	if(y1 < y2)
		printf("Y1 acima");
	else if (y1 == y2)
		printf("Mesmo pronto vertical");
	else 
		printf("Y1 abaixo");
}
