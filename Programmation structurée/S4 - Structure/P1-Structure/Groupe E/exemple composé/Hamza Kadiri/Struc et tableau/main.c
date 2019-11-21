#include <stdio.h>
#include <stdlib.h>

typedef struct info {
	char Nom [15]; 
	int age ; 
}infos;

void saisir (infos T,int N){
	int i ; 
	for(i=0;i<N;i++){
		printf("Introduire Le Nom : ");
		scanf("%s",T[i].Nom); 
		printf("Precisez son âge : ");
		scanf("%d",&T[i].age);
	}
}

void affichage (infos T, int N){
	int i ; 
	for(i=0;i<N;i++){
	   printf("Le Nom est %s ainsi que l'age est %d \n",T[i].Nom,T[i].age);
}

}


