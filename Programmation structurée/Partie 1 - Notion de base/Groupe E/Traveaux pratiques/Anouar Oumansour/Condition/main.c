#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre;
	printf("donnez un nombre :");
	scanf("%d",& nombre);
	if(nombre>0)
	printf("le nombre que vous avez saisie est positif");
	else
	printf("le nombre que vous avez saisie est negatif");
	return 0;
}
