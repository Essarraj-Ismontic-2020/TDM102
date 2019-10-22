#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
		int t[5],v=0,p=0,exist=0,i,n;
	for(i=0;i<5;i++){
		printf("entier la valeur de la case %d de tableau \n",i);
		scanf("%d",&t[i]);
	}
	printf("entier la valeur a chercher \n");
		scanf("%d",&v);
	//traitement
	for (i=0;i<5;i++){
		if(t[i]==v){
		exist++;
	}
	}
	//sortie 
	if(exist>0){
		printf("le valeur %d se trouve %d fois\n",v,exist);
	}
	else {
		printf("le valeur %d ne se trouvez pas",v);
	}
	
	
	
	
	return 0;
}
