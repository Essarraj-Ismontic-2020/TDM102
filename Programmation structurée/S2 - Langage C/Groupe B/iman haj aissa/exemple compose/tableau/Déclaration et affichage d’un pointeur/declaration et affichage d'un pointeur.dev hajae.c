#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v=10;
	int *r;
	r = &v;
	printf("adress de valeur est: %d \n", r);
	
	return 0;
}
