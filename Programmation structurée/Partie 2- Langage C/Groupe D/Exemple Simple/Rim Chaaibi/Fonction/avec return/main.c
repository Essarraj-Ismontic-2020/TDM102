#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int somme(int a,int b){
	int somme;
	somme=a+b;
	return somme;
}
int main(int argc, char *argv[]) {
	printf("somme est %d",somme(20,20));
	return 0;
}
