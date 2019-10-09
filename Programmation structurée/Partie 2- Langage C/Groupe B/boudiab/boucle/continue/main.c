#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//boudiab mohamed
int main(int argc, char *argv[]) {
	int n;
	
	for(n=0;n<=20; ){
		n++;
		if((n%4)){
			continue;
		}
    printf("%d\n",n);
	}
	
		
		return 0;
}
