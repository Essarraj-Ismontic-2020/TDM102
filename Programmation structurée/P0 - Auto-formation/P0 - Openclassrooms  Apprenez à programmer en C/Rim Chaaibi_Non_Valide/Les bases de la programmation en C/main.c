#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int variable;
	
	printf("quel entier voulez vous?\n");
	scanf("%d",&variable);
	
	
	printf("le variable a pris la valeur %d\n",variable);
	
	/*
	int--> %d
	float--> %f
	char--> %s
	*/
	
	return 0;
}
