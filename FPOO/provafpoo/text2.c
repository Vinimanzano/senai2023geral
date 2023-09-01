#include <stdio.h>
#include <stdlib.h>

int main() {
    int tempo, horas, minutos, segundos, milesemos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);
    
    horas = tempo / 3600;
    milesemos = tempo % 3600;
    minutos = milesemos / 60;
    segundos = milesemos % 60;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
