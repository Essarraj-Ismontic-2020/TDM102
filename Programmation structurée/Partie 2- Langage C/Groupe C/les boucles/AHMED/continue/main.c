#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;
	do
	{
		a++;
		if(a==4)
		{continue;
		}
		printf("le nombre est : %d\n",a);
	}
	while(a<10);
	return 0;
}
