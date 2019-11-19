#include <stdio.h>
#include <stdlib.h>

void main()
{
	//-----Declaration de la structure-----
	int i;
struct note
{
	int philo;
	int pc;
	int maths;
	};
struct note T[5];		
//-----Remplissage du tableau de structures----
for(i=0;i<5;i++)
{
	printf("Donnez la note de philo");
	scanf("%d",&T[i].philo);
	printf("Donnez la note de pc");
	scanf("%d",&T[i].pc);
	printf("Donnez la note de maths");
	scanf("%d",&T[i].maths);
}
//-----Affichage des elements du tableau de structures----
for(i=0;i<5;i++)
{
	printf("note de philo : %d , note de pc : %d, note de maths :%d\n",T[i].philo,T[i].pc,T[i].maths);
	
}

}


	
