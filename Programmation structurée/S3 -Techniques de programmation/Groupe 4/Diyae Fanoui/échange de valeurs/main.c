#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=3,y=8,h=0;
	printf(" %d\t ",x);
	printf("%d\t\n ",y);
	h=x;
	x=y;
	y=h;
	printf("%d\t %d\t",x,y);
	return 0;
}
