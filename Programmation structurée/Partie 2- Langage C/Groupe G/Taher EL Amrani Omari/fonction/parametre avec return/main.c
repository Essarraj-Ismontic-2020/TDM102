#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 int multiply(a,b,m){
 	
 	m=a*b;
 	
 	return m;
 	
 }
int main(int argc, char *argv[]) {
	
	printf ("la multiplication de (a*b)=%d",multiply(5,10));
	return 0;
}
