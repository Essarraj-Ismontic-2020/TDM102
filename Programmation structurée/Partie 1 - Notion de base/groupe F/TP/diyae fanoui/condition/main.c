#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ag=18;
	printf("donner votre age");
	scanf("%d",&ag);
	if(ag>=18)
	printf("adult");
	else
	printf("no adult");
	return 0;
}
