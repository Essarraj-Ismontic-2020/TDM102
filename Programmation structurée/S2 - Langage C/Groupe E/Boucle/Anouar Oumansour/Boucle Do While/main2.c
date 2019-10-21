#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int Nombre;
	int compteur;
	for(Nombre=0;Nombre<10;Nombre++){
	do {
		printf("Donnez un nombre entre 1 et 10: %d \n", Nombre);
		scanf("%d",&Nombre);
		printf("le nombre est : %d \n",Nombre);
		
	}
	while (Nombre>10);{
		printf("Le nombre de fois saisi est %d \n", compteur);
		compteur++;
	}
}
	return 0;
}
