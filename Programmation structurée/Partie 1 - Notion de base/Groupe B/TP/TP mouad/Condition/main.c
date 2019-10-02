#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf( "doner votre note:");
	scanf("%d",&a);
	if(a<10)                  {
	printf("redeblen");
	}else if (a>10) {
			printf( "Mebrouk");
	}    
	
	
	return 0;
}
