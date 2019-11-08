#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//Saisie
	int t[16],v=0,p=0,exist=0,i;
	for(i=0;i<16;i++){
		printf("Veuillez saisir une valeur dans la case  %d de tableau \n",i);
		scanf("%d",&t[i]);
	
	}
	
	
	//Traitement
	for (i=0;i<16;i++){
		p=i;
		exist=1;
	}
	
	
	//Fin 
		printf("Que recherchez-vous ? \n");
		scanf("%d",&v);
	if(exist){
		printf(" %d se retrouve dans %d \n",v,p);
	}
	else {
		printf("le valeur %d est introuvable",v);
	}
	
	return 0;
}
