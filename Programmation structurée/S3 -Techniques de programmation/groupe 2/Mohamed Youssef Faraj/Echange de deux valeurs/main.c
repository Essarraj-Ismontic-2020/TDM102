#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void echange(int a, int b){
	a=b;
	b=a;
}
int main(int argc, char *argv[]) {
	int a;
	int b;
	
	printf("donnez la valeur de a : ");
	scanf("%d",&b);
	printf("donnez la valeur de b : ");
	scanf("%d",&a);
	void echange(int a,int b);
	printf("a=%d b=%d ",a,b);
	
	return 0;
}
