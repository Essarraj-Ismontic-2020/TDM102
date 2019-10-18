#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nombre,prix;
	printf("donner le nombre de papier :\n");
	scanf("%f",&nombre);
	if(nombre>0 && nombre<10)
	{
	prix=nombre*0.5;
	printf("le prix est %.2f \n",prix);	
	}else if (nombre>10 && nombre<20)
	{
	prix=nombre*0.4;
		printf("le prix est %.2f \n",prix);	
	}
	else{
	prix=nombre*0.3;
		printf("le prix est %.2f \n",prix);	
		
	}
	
	return 0;
}
