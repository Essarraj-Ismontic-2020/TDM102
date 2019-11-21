#include <stdio.h>
#include <stdlib.h>

typedef struct info {
	char Nom [50]; 
	int age ; 
}infos;

void saisir (infos T,int N){
	int i ; 
	for(i=0;i<N;i++){
		printf("donner le nom : ");
		scanf("%s",T[i].Nom); 
		printf("donner l'age : ");
		scanf("%d",&T[i].age);
	}
}

void affichage (infos T, int N){
	int i ; 
	for(i=0;i<N;i++){
	   printf("le Nom et %s et l'age et %d \n",T[i].Nom,T[i].age);
}

}


