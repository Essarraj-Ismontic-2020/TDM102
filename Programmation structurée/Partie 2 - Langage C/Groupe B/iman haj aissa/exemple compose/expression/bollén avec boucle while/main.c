#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2;
	while(a<10){
		if(a<2||a>2){
			printf("false\n");
		}
		else{
			printf("true\n");
		}
		(a++);
	}
	return 0;
}
