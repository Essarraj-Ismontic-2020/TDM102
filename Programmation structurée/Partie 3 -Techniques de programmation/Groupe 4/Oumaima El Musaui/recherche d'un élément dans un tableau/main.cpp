#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;//taille de tableau
	int T[5];//tableau entier
	int x ;//valeur a rechercher
	int trouve;//condition de recherche
	int i;//parcourir le tableau
	
	printf("donnez la taille du tableau :");
	scanf("%d",&n);
	printf ("remplissage du tableau \n");
	for(i=0;i<n;i++){
		printf ("donnez la valeur N %d:",i+1);
		scanf("%d",&T[i]);
	}
	printf ("la valeur a chercher dans le tableau:");
	scanf("%d",&x);
	trouve=0;
	for(i=0;i<n;i++){
		if(T[i]==x){
		trouve = 1;
		break;
	}
	
		
	}
	if(trouve==0)
	printf ("la valeur %d n existe pas dans le tableau",x);
	else
	printf("la valeur %d exeste dans le tableau",x)	;
	return 0;
}
