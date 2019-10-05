#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	int GA, GB;
	
	printf("les formateur de TDM 102 groupe A: \n");

	for(GA=0 ; GA<5 ; GA++) {
		printf("D62onez votre age: \n");
		scanf ("%d",&a);
	}
	printf ("************************* \n");
		printf("les formateur de TDM 102 groupe B: \n");
		
		for(GB=0 ; GB<5 ; GB++) {
		printf("Donez votre age: \n");
		scanf ("%d",&b);
	}
	
	return 0;
}
