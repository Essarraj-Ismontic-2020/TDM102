#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double tab[5]={18.5,17,15.5,13.5,10};
	int a;
	for(a=0;a<5;a++){
		printf("%.1lf\n",tab[a]);
	}
	
	
	return 0;
}
