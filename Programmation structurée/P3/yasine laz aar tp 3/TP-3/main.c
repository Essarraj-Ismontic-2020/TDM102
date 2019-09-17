#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nombre ;
	printf ("donnez un nombre :\n ");
	scanf ("%f" ,&nombre ) ;
	printf("le nombre que vous avez saisie est \t : %f ",nombre);
	return 0;
}
