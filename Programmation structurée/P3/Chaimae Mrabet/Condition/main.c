#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
float copie,prix;
	
	printf("Entrez le nombre de copie:");
	scanf ("%f",&copie);
	
	if(copie>10)	
	{
		prix=copie*0.5;
	}
	if((copie>10)&&(copie<20)) 
	{
		prix=copie*0.4;
	}	
	else
	{
		prix=copie*0.3;
	}
	
    printf(" le prix est : %f",prix);
		
	return 0;
}
