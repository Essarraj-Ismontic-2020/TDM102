#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("Entrez deux nombres entiers :");
	 scanf("%i %i", &a, &b);
	 if (a>b)
	 printf("a supérieur à b,%i");
	 else 
printf("a inférieur à b ,%i");
	
	return 0;
}
