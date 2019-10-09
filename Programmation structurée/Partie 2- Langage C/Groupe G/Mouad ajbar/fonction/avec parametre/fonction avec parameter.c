#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void somme(int a,int b){
	int s;
	s=a+b;
	printf("%d",s);
}

int main(int argc, char *argv[]) {
	somme(10,20);
	return 0;
}
