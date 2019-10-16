#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a = 20 ; 
	do {
		printf("hello %d \n",a);
		(a++);
	}
	while (a<=25);
	return 0;
}
