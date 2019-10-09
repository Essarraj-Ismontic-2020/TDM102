#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int hello( int a , int b){
	
	int n ; 
	n = b+a;

	
	return n;

}
int main(int argc, char *argv[]) {
	
	printf("hello world : %d",hello(2000,19));
	
	
	return 0;
}
