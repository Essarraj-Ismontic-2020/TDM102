#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
//Saisie

int pmax,i,n,tab[66];
pmax=0;
printf("introduisez la taille du tableau : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("tab[%d]=",i);
scanf("%d",&tab[i]);

//Traitement 

if(tab[pmax]<tab[i])

pmax=tab[i];
}
for(i=1;i<=n;i++)
{
if (pmax==tab[i])

//Affichez : 

printf("le nombre max est : %d\n",pmax);}
	return 0;
}
