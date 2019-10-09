#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i,j;
	float k;
	printf("donner la 1er nombre ");
	scanf("%f",&j);
printf("donner la 2eme nombre");
scanf("%f",&i);
if(j==0)
printf("la division et imposible ");
else
k=j/i;
printf(" la division est %.2f\n",k);




	return 0;
}
