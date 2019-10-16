#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("entrer un nombre de 1 a 3: ");
	scanf("%d",&a);
	switch (a)
	{
		case 1:
			printf("salu 1");
			break;
		case 2:
		     printf("salu 2");
			 break;
		case 3:
			 printf("salu3");
			 break;	
	    default:
		      printf("le numiro est incorecte");
			  break;			
	}
	return 0;
}
