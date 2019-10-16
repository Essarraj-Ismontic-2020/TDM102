#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A=3;
	int *pointeursurA=&A;
	printf("La valeur de A est: %d \n", *pointeursurA);
	return 0;
}

