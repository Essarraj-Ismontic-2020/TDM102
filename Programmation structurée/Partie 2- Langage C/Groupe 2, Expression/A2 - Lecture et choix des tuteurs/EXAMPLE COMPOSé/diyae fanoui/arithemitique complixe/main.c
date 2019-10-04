#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
float z;
	printf("donner le 1 er nombre ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre ");
	scanf ("%d",&b);
	c=a+b;
	printf("la somme est %d\n",c);
	printf("*******************************\n");
	printf("donner le 1 er nombre\n ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre\n ");
	scanf ("%d",&b);
	 z=a/b;
	printf("la division est %f\n",z);

	printf("*******************************\n");
	printf("donner le 1 er nombre ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre ");
	scanf ("%d",&b);
	c=a*b;
	printf("la multuplication est %d\n",c);
	
	printf("*******************************\n");
	printf("donner le 1 er nombre ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre ");
	scanf ("%d",&b);
	c=a*b;
	printf("la somme est %d\n",c);

	
	return 0;
}
