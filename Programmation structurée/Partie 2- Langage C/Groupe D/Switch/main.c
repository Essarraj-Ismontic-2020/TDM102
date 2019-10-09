#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d=0;
	printf("saisir un nombre de 1 a 3");
	scanf("%d",&d);
	switch (d)
	{
		case 1:
			printf("salut 1");
			break;
		case 2:
			printf("salut 2");
			break;
		case 3:
			printf("salut 3");
			break;
			default:
			    printf("je n'ai aucun phrase prete ton nombre");
			break;
	}
	return 0;
}
