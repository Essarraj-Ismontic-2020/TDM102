#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d=0;
	printf("saisir un nombre de 1 a 6: ");
	scanf("%d",&d);
	switch (d) 
	{ 
	case 1:
	printf("Salut 1 !"); 
	break; 
	case 2:
	printf("Salut 2 !");
	break;
	case 3:
	printf("Salut 3 !"); 
	break; 
	case 4:
	printf("Salut 4 !"); 
	break;
	case 5:
	printf("Salut 5 !"); 
	break; 
	case 6:
	printf("Salut 6 !"); 
	break;
	default:printf("Je n'ai aucune phrase prete pour ton nombre  ");
	break; 
}
	return 0;
}

