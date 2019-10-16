#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void echange (int a,int b){
	int t;
	printf("debut fonction :\n a = %d\t b = %d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("fin fonction : \n a	= %d\t b = %d\n ",a,b);
	
}
    return 0;

