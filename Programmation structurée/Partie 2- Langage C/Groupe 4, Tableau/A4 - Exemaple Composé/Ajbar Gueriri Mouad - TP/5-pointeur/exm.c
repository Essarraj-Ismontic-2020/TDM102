#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m=5;
	int *a;
	
	a = &m;
	printf("*j = %d \n", *a);
	
	return 0;
}
