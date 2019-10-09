#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void carre(int x){
	int r;
	r=x*x;
	printf("Le carre de %d est %d \n",x,r);
}


int main(int argc, char *argv[]) {
	carre(5);
	return 0;
}




