#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void somme(int n1,int n2){
int somme;
somme=n1+n2;
printf("somme est%d \n",somme);
}
int main(int argc, char *argv[]) {
	somme(10,10);
	return 0;
}
