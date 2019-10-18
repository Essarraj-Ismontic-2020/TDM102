#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int prix_HT;
	int TVA;

	printf("ecrire le prix HT\n");
	scanf("%d",&prix_HT);
	printf("ecrire le TVA \n");
	scanf("%d",&TVA);
	int TTC=prix_HT+TVA;
	printf("le prix total :%d",TTC);
	
	return 0;
}
