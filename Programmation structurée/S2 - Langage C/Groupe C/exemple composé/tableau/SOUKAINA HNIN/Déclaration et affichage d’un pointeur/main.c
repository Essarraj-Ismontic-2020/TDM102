#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age = 22 ;
	int *pointeurSurage = &age ;
	printf ("%d",pointeurSurage);
	return 0;
}
