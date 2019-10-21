#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	for (a=0;a<10;a++){
		if(a>3&&a<5){
			printf("stop\n");
		}
		else {
			printf("run\n");
			
		}
	}
	return 0;
}
