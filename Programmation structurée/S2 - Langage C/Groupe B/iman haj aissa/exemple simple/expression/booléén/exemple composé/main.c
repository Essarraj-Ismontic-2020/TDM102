#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	printf("entrez deux nombres:");
	scanf("%i",&a,&b);
	if(a<b)
	printf("plus petit que: a,b");
	else if (a>b)
	printf("plus grand que: a,b");
	return 0;
}
