#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int x,y,z;
	
	printf("Entrez la valeur de x:");
	scanf("%d",&x);
    printf("Entrez la valeur de y:");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("La valeur de x est %d\n et y %d",x,y);
	
	
	

	return 0;
}
