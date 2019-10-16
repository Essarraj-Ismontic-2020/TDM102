#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double tab[4]={1.1,2.2,3.3};
	int i;
	for(i=0;i<2;i++)
	{
		printf("%.2lf\n",tab[i]);
	}
	return 0;
}
