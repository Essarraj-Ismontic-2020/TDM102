#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int prix, n;
	printf("tapper le nombre de kg\n");
	scanf("%d",&n);
	if(n>0&n<5){
	printf("%d",n*4);
     }
    else {
     	printf("%d",n*3);
	 }
	
	return 0;
}
