#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,f,h;
	printf("donner la 1er nombre");
	scanf("%d",&i);
	printf("donner la 2eme nombra");
	scanf("%d",&f);
	h=i+f;
	printf("la somme est %d",h);
	return 0;
}
