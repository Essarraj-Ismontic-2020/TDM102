#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero1=0, numero2=0, inverse=0;
	
	
	//Début
	printf("Saisir le premier numero (A): ");
	scanf("%d",&numero1);
	printf("Saisir le second numero (B): ");
	scanf("%d",&numero2);
	
	
	//traitement
	inverse=numero1;
	numero1=numero2;
	numero2=inverse;
	
	
	//Fin
	printf("\nA= %d \t B= %d",numero1, numero2);
	return 0;
}
