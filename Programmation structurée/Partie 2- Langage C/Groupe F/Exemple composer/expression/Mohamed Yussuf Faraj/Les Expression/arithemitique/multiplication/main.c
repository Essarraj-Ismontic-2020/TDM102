#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,y,f;
	printf("Give me the 1st number : ");
	scanf("%d",&m);
	printf("Give me the 2st number : ");
	scanf("%d",&y);
	f=m*y;
	printf("the number after operation %d * %d is %d",m,y,f);
	return 0;
}
