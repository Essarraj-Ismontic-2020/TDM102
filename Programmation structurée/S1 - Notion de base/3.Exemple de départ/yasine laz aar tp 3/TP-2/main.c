#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre;// declaration d'une variable
	printf("Donner un Nombre : ");
	scanf("%d",&nombre);//lire
	printf("Le Nombre que vous avez saisie est : %d",nombre);
	return 0;
}
