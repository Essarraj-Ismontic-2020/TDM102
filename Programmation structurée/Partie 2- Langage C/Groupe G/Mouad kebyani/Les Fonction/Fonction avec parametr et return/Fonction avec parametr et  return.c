#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int somme (int Q,int P){
	int SS;
	SS=Q-P;
	return SS;
}
int main(int argc, char *argv[]) {
	
	printf("est %d ",somme(500,430));
	return 0;
}
