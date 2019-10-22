#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int T[5];
	int R;
	int v;
	int index;
	int i ;
	for(i=0;i<5;i++){
		printf("entrer la valeur dans le tableau:",i);
		scanf("%d",&T[i]);
		}
		printf ("entrer la valeur a chercher :");
		scanf("%d",&v);
		for(index=0;index<5;index++){
			if(T[index]==v){
			R++;	
			}
		}
			if(T[index]==v)
			{
		printf("la valeur %d existe dans la tableau %d",v,R);
	}
	else 
	{
		printf("la valeur %d n existe pas dans le tableau %d",v);
	}
	return 0;
}
