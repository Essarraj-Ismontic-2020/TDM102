#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float calculatrice  (float x , float y){
float z;
int q ;
printf("donnre x nombre :");
scanf("%f",&x);
printf(" 1 addition \n");
printf("2 soustraction \n :");
printf("3 division \n:");
printf("4 multiplication \n:");
printf("donnez votre choix :");
scanf("%d",&q);
printf("donnre y nombre :");
scanf("%f",&y);

switch (q )
{
	case 1: z=x+y ;
	printf("la somme est : %f +%f = %f",x,y,z);
	break;
	case 2: z=x-y;
		printf("la somme est : %f -%f = %f",x,y,z);
	break;
		case 3: z=x*y;
		printf("la somme est : %f * %f = %f",x,y,z);
	break;
		case 4: z=x/y;
			printf("la somme est : %f / %f = %f",x,y,z);
			
				break;
	
	
 default: printf("Entrer 1,2,3,4");
 break;
}
	     
} 

int main(int argc, char *argv[]) 
{
	float x , y ;
    calculatrice(x,y);

	return 0;
}
