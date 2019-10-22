#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//saisir
	int t[5],v=0,p=0,exist=0,i;
	for(i=0;i<5;i++){
		printf("entier la valeur de la case %d de tableau \n",i);
		scanf("%d",&t[i]);
	
	}
	//traitement
	for (i=0;i<5;i++){
		p=i;
		exist=1;
	}
	//sortie 
		printf("entier la valeur a chercher \n");
		scanf("%d",&v);
	if(exist){
		printf("le valeur%d se teouve dans %d \n",v,p);
	}
	else {
		printf("le valeur %d ne se trouvez pas",v);
	}
	
	return 0;
}
