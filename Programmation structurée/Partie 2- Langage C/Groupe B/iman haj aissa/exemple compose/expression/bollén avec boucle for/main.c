#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int b;
	for (a=0,b=0;a<=7,b<=7;a++,b++){
		if(a>2&&a<8 || b>5&&b<8){
			printf("true \n");
		}
		else{
			printf("false\n");
		}
	}
	return 0;
}
