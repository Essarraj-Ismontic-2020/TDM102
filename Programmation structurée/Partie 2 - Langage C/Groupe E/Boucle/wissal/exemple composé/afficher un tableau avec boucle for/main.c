#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		double tableau[3]={1.1,2.2,3.3};
	int i;
	for(i=0;i<3;i++){
	
		printf("%.2lf \n",tableau[i]);
	}
	return 0;
}
