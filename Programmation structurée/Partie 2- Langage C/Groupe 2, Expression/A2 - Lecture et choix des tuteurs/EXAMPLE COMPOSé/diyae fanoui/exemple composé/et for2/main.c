#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a,b,c,i;        
	 printf ("Introduire a, b et c : ");
	  scanf ("%d%d%d",&a,&b,&c); 
 for(i=0;i<10;i++){
if (a==b && b!=c) {  
printf(" vrai\n"); }
else{
	printf("faux\n");
}
}
	return 0;
}


