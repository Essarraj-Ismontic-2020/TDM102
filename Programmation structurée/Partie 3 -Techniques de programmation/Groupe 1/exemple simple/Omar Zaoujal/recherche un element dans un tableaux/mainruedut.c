#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a ; //la taille de tableau 
	int T[90];//tableau
	int x ; //valeur de recherche 
	int trouve ; //condition de recherche 
	int b ; //parcourir le tableau 
	
	printf("ecrire un nombre \n"); 
	scanf("%d",&a);
	printf("remplissage de tableau \n "); 
	for(b=0;b<a;b++){
		printf("donner la valeur A %d \n ",b+1);
		scanf("%d",&T[b]);
	}
	printf("donner la valeur de recherche dans un tableau : \n ");
	scanf("%d",&x);
	trouve = 0 ;
	for(b=0;b<a;b++){
	if(T[b]==x){
		trouve = 1 ;
		break ;
	}
	else if (trouve ==0){
		printf("la valeur %d ne existe pas dans le tableau \n",x);
	}
	else {
		printf("la valeur %d existe dans le tableau \n ");
		getch();
	}
	
	}
	
	return 0;
}
