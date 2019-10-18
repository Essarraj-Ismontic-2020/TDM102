#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=10;
	int *a;
	a = &x;
	printf("l'address de valeur est: %d \n", a);
	
	return 0;
}
