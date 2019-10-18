#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	a=0;
	do{
		printf("la valeur de a est %d\n",a);
		a++;
	}while (a<=10);
	return 0;
}
