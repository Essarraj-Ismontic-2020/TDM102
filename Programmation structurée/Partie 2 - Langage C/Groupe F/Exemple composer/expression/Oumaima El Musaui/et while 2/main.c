#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a,b,c,i;
	printf ("introduire a,bet c:");
	scanf("%d%d%d",&a,&b,&c);
	while(i<10){
			if(a==b && b!=c){
			printf ("vrai\n");}
		else {
			printf ("faux\n");
			}
		i++;
	}
	
	
	
	return 0;
}
