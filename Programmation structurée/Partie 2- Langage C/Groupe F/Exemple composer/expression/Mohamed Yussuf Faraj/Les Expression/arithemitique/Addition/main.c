#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m,y,f;
	printf("Give me the first number : ");
	scanf("%d",&m);
	printf("Give me the second number : ");
	scanf("%d",&y);
	f=m+y;
	printf("The final number after operation is : %d",f);
	return 0;
}
