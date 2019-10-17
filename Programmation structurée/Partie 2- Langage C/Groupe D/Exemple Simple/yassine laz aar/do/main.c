#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n ;
	do{
		printf ("donnez un nb >0 : ") ;
		scanf ("%d",&n) ;
		printf ("vous avez fourni %d\n", n) ;
	} while (n<=0) ;
	printf ("reponse correcte") ;
	
	return 0;
}
