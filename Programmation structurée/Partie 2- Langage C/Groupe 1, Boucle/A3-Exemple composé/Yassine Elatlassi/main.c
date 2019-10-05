#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("1.entrer ou 2.sortir: ");
	scanf("%d",&a);
    	while (a!=2)	
		{
	    printf("entrer un nombre");
	    scanf("%d",&b);
	    if (b>0)
	    {printf("le nombre que vous avez saisir est positive\n");}
	    else if (b<0)
	    {printf("le nombre que vous avez saisir est negative\n");}
	    printf("1.entrer ou 2.sortir: ");
	    scanf("%d",&a);
	    }
	printf("fin de programme");
	return 0;
}
