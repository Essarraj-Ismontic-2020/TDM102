#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int TVA;
	int prix_HT ;
	int TTC = TVA + prix_HT;
	printf("donnez le prix HT \n");
	scanf("%d",&prix_HT);
	printf("donnez le TVA \n");
	scanf("%d",&TVA);
	printf("le prix total : %d",prix_HT+TVA );
	return 0;
}
