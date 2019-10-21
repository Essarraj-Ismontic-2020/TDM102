#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Affectation
	int i,element,Tableau[5]={11,33,55,22,44};
	//Entrer
	printf("Entrez l'element que vous souhaitez rechercher: ");
	scanf("%d",&element);
	//Traitement et sortie
	for (i=0;i<5;i++)
	{
     if (element!=Tableau[i])
	 {
	 printf("l'element %d ne ce trouve pas dans la case tableau[%d]\n",element,i);}
	 else if (element=Tableau[i])
	 { 
	 printf("l'element %d ce trouve dans la case %d ,dans l'adresse '%d' \n",element,i,&Tableau[i]);}
	}
	return 0;
}
