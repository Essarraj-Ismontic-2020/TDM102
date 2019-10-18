#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	printf("entrer un nombre: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf(" %d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
