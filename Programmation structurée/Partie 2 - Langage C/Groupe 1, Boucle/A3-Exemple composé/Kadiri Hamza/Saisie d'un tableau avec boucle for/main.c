
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	double T[4];
	int i;
	for (i=0;i<4;i++)
    {
    	printf("Veuillez saisir votre valeur ");
    	scanf("%d" , &T[i]);
	}
	printf("%d	%d	%d	%d", T[0],T[1],T[2],T[3]);
	return 0;
}

