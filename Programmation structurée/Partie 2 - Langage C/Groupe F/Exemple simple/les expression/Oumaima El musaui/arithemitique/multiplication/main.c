#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("donner la 1er nombre");
	scanf("%d",&a);
	printf("donner la 2eme nombre");
	scanf("%d",&b);
	c=a*b;
	printf("la multiplication de %d est %d =%d",a,b,c);
	return 0;
}
