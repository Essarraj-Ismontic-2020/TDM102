#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<10;i++)
	{
		printf("le nombre est %d \n",i);
	}
	printf("*********************************************");
		for(i=10;i>-1;i--)
	{
		printf("le nombre est %d \n",i);
	}
	return 0;
}
