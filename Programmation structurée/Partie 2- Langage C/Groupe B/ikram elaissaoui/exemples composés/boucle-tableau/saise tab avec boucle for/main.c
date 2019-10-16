#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double tab[4];
	int i;
	for(i=0;i<4;i++)
	{
		printf("entrer la valeur dans le tableau :");
		scanf("%d",&tab[i]);
	}
	return 0;
}
