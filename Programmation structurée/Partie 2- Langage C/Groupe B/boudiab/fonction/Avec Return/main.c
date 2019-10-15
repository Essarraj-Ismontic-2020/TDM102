#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//mohamed boudiab

int A(int b , int c){
	int A;
	A=b*c;
	return A;
}

int main(int argc, char *argv[]) {
	printf("somme est %d", A(4,25));
	return 0;
}
