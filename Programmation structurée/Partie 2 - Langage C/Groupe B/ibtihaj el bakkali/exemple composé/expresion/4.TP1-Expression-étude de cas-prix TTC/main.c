#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int prix,HT;
	int TVA;
	int TTC=prix-HT+TVA;
	printf("ecrire le prix HT\n");
	scanf("%d",&prix-HT);
	printf("ecrire le TVA \n");
	scanf("%d",&TVA);
	printf("le prix total: %d",prix-HT+TVA);
	
	return 0;
}
