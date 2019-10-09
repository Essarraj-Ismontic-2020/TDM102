#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	c=0;
	do {
		printf("la valeur de c est %d \n",c);
		c++;
	}while(c<=20);
	return 0;
}
