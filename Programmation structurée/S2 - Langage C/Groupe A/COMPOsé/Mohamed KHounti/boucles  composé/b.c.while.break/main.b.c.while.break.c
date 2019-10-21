#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int m=0;
	while (m<10){
		m++;
		if(m==8){
			break;
		}
		printf("%d \n",m);
	}
	
	
	
	
	return 0;
}
