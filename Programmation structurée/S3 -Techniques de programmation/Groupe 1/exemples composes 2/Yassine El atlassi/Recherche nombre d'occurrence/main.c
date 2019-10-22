#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int T[5],v=0,index,nExist=0;
	int i;
	for(i=0;i<5;i++)
	{printf("Entre la valeur dans la case %d de tableau:",i);
	scanf("%d",&T[i]);
	}
	printf("Entrer la valeur rechercher:");
	scanf("%d",&v);
	//Traitement
	for(index=0;index<5;index++)
	{if(T[index]==v)
	{
	nExist++;	}
	}
	
	//afficher
	if (nExist>0)
	{printf("la valeur %d se trouve %d fois dans le tableau",v,nExist);
	}
	else {printf("la valeur %d n'existe pas dans le tableau",v);
	}
	return 0;
}
