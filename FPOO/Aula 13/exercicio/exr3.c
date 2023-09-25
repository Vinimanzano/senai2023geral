#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
   FILE *entrada;
   entrada = fopen ("resultado.txt", "r");
   if (entrada == NULL) {
      printf ("\nNão encontrei o arquivo!\n");
      exit (EXIT_FAILURE);
   }  
   double soma = 0.0;
   int n = 0;
   while (true) {
      int x;
      int k = fscanf (entrada, "%d", &x);
      if (k != 1) break;
      soma += x;
      n += 1;
   }
   fclose (entrada);
   printf ("A média dos números é %f\n", soma/n);
   return EXIT_SUCCESS;
}
