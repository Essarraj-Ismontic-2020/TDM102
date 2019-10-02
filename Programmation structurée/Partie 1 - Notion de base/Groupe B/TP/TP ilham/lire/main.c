#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre;
	printf("Donner un nombre:");
	scanf( "%d",& nombre);
	printf("le nombre que vous avez saisie est:%d",nombre);
	return 0;
}
