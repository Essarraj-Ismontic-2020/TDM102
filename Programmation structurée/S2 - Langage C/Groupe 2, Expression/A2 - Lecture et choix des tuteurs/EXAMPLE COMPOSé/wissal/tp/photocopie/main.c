#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float no,pr;
	printf("donner le nombre de papier :\n");
	scanf("%f",&no);
	if(no>0 && no<10)
	{
	pr=no*0.5;
	printf("le prix est %.2f \n",pr);	
	}else if (no>10 && no<20)
	{
	pr=no*0.4;
		printf("le prix est %.2f \n",pr);	
	}
	else{
	pr=no*0.3;
		printf("le prix est %.2f \n",pr);	
		
	}
	
	return 0;
}
