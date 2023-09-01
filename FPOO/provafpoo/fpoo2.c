#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"");
	
    int tempo;
    int horas = 0;
    int minutos = 0;
	int segundos = 0;
	int i;
	
	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempo);
	
	for(i = 0;i < tempo; i++){
		scanf("%d %d %d%d", &horas, &minutos, &segundos);
}

	return 0;
}
