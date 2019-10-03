#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d=0;
	printf("saisir un nombre de 1 a 9: ");
	scanf("%d",&d);
	switch (d) 
	{ 
	case 1:
	printf("Hello 1 !"); 
	break; 
	case 2:
	printf("Hello 2 !");
	break;
	case 3:
	printf("Hello  3 !"); 
	break; 
	case 4:
	printf("Hello  4 !"); 
	break;
	case 5:
	printf("Hello  5 !"); 
	break; 
	case 6:
	printf(" Hello 6 !"); 
	break;
	case 7:
	printf("Hello  7!");
	break;
	case 8:
	printf("Hello 8!");
	break;
	case 9:
	printf("Hello 9!");
	
	default:printf("Je n'ai aucune phrase prete pour ton nombre  ");
	break; 
}
	return 0;
}

