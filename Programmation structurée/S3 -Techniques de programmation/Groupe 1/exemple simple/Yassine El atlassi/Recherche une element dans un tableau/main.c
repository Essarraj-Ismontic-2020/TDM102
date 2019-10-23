#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Entrer
	int ValeurRechercher=0,PostResultat=-1;
	int T[100];
	int TailleTableau;
	printf("Entrer la taille de tableau :");
	scanf("%d",&TailleTableau);
	int i;
	for(i=0;i<TailleTableau;i++)
	{printf("Entrer la valeur dans la case %d de le tableau: \n",i);
	scanf("%d",&T[i]);
	}
	printf("Donner la valeur que vous voulez rechercher:");
	scanf("%d",&ValeurRechercher);
	
	//traitement
	int x;
	for(x=0;x<8;x++)
	{if (ValeurRechercher ==T[x])
	{(PostResultat=x);	}
	}
	//Sortir
	if (PostResultat!=-1)
	{printf("La valeur %d ce trouve dans la case %d de le tableau",ValeurRechercher,PostResultat);}
	else{
	printf("La valeur %d ne ce trouve pas dans le tableau",ValeurRechercher);}
	return 0;
}
