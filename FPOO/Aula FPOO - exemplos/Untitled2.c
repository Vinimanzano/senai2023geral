#include <stdio.h>
int main(){
	int i, sexo;
	printf("Informe sua idade: ");
	scanf("%d",&i);
	printf("Informe como você de identifica 1 = Mulher, 2 = Homem:");
	scanf("%d",&sexo);
	if(sexo == 1){
		if(i<10) printf("Criança");
		else if(i<15) printf("Adolescente");
		else if(i<20) printf("Jovem");
		else if(i<35) printf("Adulta");
		else if(i<55) printf("Meia idade");
		else printf("Idosa");
	} else {
		if(i<20) printf("Criança");
		else if(i<35) printf("Adolescente");
		else if(i<40) printf("Jovem");
		else if(i<50) printf("Adulto");
		else if(i<55) printf("Meia idade");
		else printf("Idoso");
	}
	return 0;
}
