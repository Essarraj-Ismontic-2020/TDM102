#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tableau[5];
	int a;
	int i;
	int j;
	int b;
	for (i=0;i<5;i++){
		printf("donnez la valeur N");
		scanf("%d",&tableau[i]);
		
	}
	printf("la valeur a chercher dans le tableau");
	scanf("%d",&a);
	j=0;
	b=-1;
	for(i=0; (i<5) && (b==-1);i++){
	     if (tableau[i]==a)
           b=i;
           
		if(tableau[i]==a){
			j=1;
			break;
		}
}
	if (j==0){
		printf("la valeur %d n'existe pas dans le tableau",a);
		
	}
	else {
		printf("la valeur %d existe dans le tableau a la position %d",a,b);
	}
	return 0;
}
