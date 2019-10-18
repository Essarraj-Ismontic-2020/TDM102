#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int valide(int a){
	if (a > 0){
		
		printf("le nmber %d est positive",a);
	}else {
		printf("le nmber %d est nigative",a);
		
	}
	
	
}



int main(int argc, char *argv[]) {
	int number;
	printf("donne une nmber :");
	scanf("%d",&number);
	valide(number);
	
	
	
	
	
	return 0;
}





