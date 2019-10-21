#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int pr_htva,tva=20,calcul,noar,pr_atva,ru;   // declaration variable + initialisation de la tva

printf("Entrer un montant hors tva\n");   //sorti standard , affiche un msg
scanf("%d",&pr_htva);   //entrer standard  , attend qqchose taper au clavier (le pr hors tva)
printf("entre le nobre de article");
scanf("%d",&noar);
//calcul de la tva

calcul = (pr_htva * tva) / 100; 
pr_atva = pr_htva + calcul;
ru=pr_atva*noar;

printf("Le montant avec TVA est de : %d\n", ru);  //affiche résultat

 //tout c est bien passé

	return 0;
}
