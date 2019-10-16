#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int pr,tva=20,calcul,noar,pr_atva,ru;  
printf("Entrer un montant hors tva\n");  
scanf("%d",&pr);   
printf("entre le nobre de article");
scanf("%d",&noar);
calcul = (pr* tva) / 100; 
pr_atva = pr + calcul;
ru=pr*noar;

printf("Le montant avec TVA est de : %d\n", ru);
	return 0;
}
