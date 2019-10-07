#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int valide(int a){
	if (a > 10){		
		printf("une bon note",a);
	}else
{
		printf("une mauvaise note",a);
		
	}
	
	
}



int main(int argc, char *argv[]) {
	int number;
	printf("donne une nmber :");
	scanf("%d",&number);
	valide(number);
	
	
	
	
	
	
	return 0;
}





