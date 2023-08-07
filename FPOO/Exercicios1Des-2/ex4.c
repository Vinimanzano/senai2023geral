#include<stdio.h>
int main(){
	int a, b, c;
	
	printf("Entre o primeiro lado do A: ");
	scanf("%d", &a);
	
	printf("Entre o segundo lado do B: ");
	scanf("%d", &b);
	
	printf("Entre o terceiro lado do C: ");
	scanf("%d", &c);
	
	if(a == b && a == c){
		printf("Equilatero");
	} else if(a == b || a == c) {
		printf("Isosceles");
	} else {
		printf("Escaleno");
	}
	return 0;
}
