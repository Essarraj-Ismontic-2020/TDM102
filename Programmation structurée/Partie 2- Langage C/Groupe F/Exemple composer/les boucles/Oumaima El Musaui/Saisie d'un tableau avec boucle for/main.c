#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double tableau [4];
	int i;
	for (i=0;i<4;i++)
	{
		printf ("enyrer la valeur dans le tableau :");
		scanf ("%d",&tableau[i]);
		
	}
	printf ("%d %d %d %d", tableau [0], tableau[1], tableau [2],tableau[3], tableau [4]);
	return 0;
}
