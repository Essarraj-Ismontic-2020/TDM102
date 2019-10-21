#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void carre (int f){
	int w;
	w=f*f;
	printf ("le carre de %d est %d \n" ,f,w);
	return;
	
}



int main(int argc, char *argv[]) {
	carre(10);
	carre(3);
	return 0;
}
