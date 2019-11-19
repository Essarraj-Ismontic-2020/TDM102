#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
	int N,i,T[100],j,a;
	printf("entrer la nombre des element : ");
	scanf ("%d",&N);
	for (i=0 ; i<N ; i++){
		printf("remplire le case %d : ",i+1);
		scanf("%d",&T[i]);}
		for (i=0 ; i<N ; i++){
			for(j=i+1 ; j<N ; j++){
				if(T[i]<T[j]){
					a=T[i];
					T[i]=T[j];
					T[j]=a;
				}
			}
		}
		printf("Tableau trier in : \n");
					for(i=0 ; i<N ; i++){
						printf("%d\t", T[i]);}
return 0;}
