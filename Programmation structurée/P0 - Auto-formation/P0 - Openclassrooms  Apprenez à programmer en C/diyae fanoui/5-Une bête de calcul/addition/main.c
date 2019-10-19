#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre1, nombre2,resultat;
	  
  printf("Entrez le nombre 1 : ");
  scanf("%d", &nombre1);
  printf("Entrez le nombre 2 : ");
  scanf("%d", &nombre2);
  
  // On fait le calcul :
  
  resultat = nombre1 + nombre2;
  
  // Et on affiche l'addition à l'écran :
  
  printf ("%d + %d = %d\n", nombre1, nombre2, resultat);
 
	return 0;
}
