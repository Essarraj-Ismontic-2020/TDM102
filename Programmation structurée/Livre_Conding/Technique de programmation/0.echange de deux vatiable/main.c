#include <stdio.h>
#include <stdlib.h>

void changement(int*x , int*y){
	int z ; 
	z=*x ; 
	*x=*y ; 
	*y = z ;
}

int main(int argc, char *argv[]) {
	int a , b ; 
	//saisie
	printf("Entrer la valeur de a : ");
	scanf("%d",&a);
	printf("Entrer la valeur de b : ");
	scanf("%d",&b);
	
	//traitement 
	changement(&a,&b);

    //affichage 
	printf("a = %d et b = %d",a,b);
		
	return 0;
}
