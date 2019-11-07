#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void saisieTableau(int *T,int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("Entrer la valeur de case %d: ",i);
		scanf("%d",&T[i]);
	}
}

void affichertableau(int *T, int N){
	int i ; 
	for(i=0;i<=(N-1);i++)
		{
			printf("la valeur de case %d et %d \n",i,T[i]);
	}
}

int Recherche(int n,int* T,int vr ){
	int pos = -1;
	int i;
	for(i = 0;i < n ;i++){
		
		if (T[i]== vr){
			 pos = i ;
			
		}
		
		
		
	}
	return pos;
	
}	
	


int main(int argc, char *argv[]) {
	//declaration des variables
	int T[100];
	int N;
	int vr;
	//saisie tableu
	printf("Donner la valeur de taille tableau: ");
	scanf("%d",&N);

	saisieTableau(T,N);
	//recherche
	printf(" \n Donner la valeur a cherche : ");
	scanf("%d",&vr);
	int pos = Recherche(N,T,vr);
		printf(" position %d \n",pos);
	if(pos >= 0){
		printf(" la valeur %d exist a position %d \n",vr,pos);
		
	}else{
		
		printf(" la valeur %d ne exist pas \n");
	}
		//affiche
	affichertableau(T,N);
	return 0;
}
