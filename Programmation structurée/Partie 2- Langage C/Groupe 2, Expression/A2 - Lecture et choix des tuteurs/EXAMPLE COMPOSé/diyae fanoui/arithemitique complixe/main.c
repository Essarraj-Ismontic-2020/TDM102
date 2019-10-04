#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
float z;
printf("poure la somme\n");
	printf("donner le 1 er nombre ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre ");
	scanf ("%d",&b);
	c=a+b;
	printf("la somme est %d\n",c);
	printf("*******************************\n");
	printf("poure la division \n");
	printf("donner le 1 er nombre\n ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre\n ");
	scanf ("%d",&b);
	 z=a/b;
	printf("la division est %.2f\n",z);

	printf("*******************************\n");
	printf("poure la multuplication \n");
	printf("donner le 1 er nombre ");
	scanf ("%d",&a);	
	printf("donner le 2eme nombre ");
	scanf ("%d",&b);
	c=a*b;
	printf("la multuplication est %d\n",c);
	
	printf("*******************************\n");
	printf("poure la sostraction \n ");
		printf("donner 1er nombre ");
	scanf("%d",&a);
	printf("donner la 2eme nombre");
	scanf("%d",&b);
	c=a-b;
	printf("operation de sostraction est %d-%d=%d",a,b,c);	
	

	
	return 0;
}
