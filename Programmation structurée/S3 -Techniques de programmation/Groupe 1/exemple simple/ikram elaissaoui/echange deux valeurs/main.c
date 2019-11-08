#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */ 
void main(int argc, char *argv[] ){
	int a,b,c;
	printf("donnez la premiere variable a : \n");
	scanf("%d",&a);
	printf("donnez la deuxieme variable b : \n");
	scanf("%d",&b);
	c=a;  //le tanpon contient la valeur de a
	a=b;  // la variable a contient la valeur de b
	b=c;  // la variable b contient la valeur de c
	printf ("la variable a= %d\n",a);
	printf ("la variable b= %d\n",b);
	return 0;
}
