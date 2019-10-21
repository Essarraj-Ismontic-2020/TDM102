#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	double w[4]={12.5,3.3,514.1,'\0'};
	int k ;
	for(k=1;k<=8;k++){
		printf("%.2lf\n",w[k]);
	}
	
	
	return 0;
}
