#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tab[4]={18,-2,-35,90};
	int i;
	for(i=0;i<4;i++)
	{
		if(tab[i]>0)
		printf("%d\n",tab[i]);
	}
	return 0;
}
