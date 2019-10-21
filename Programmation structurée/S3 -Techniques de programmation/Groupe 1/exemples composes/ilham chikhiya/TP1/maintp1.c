#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

int prix_HT ;
int TVA ; 
int TTC = prix_HT + TVA ; 
printf("ecrire le prix HT \n");
scanf("%d", &prix_HT);
printf("ecrire la TVA \n"); 
scanf("%d",&TVA); 
printf("le prix total : %d",prix_HT+TVA);











	return 0;
}
