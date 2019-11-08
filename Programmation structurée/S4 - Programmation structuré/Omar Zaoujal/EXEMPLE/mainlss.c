#include <stdio.h>
#include <stdlib.h>


//saisir

struct informations {
	int age ; 
	float height ; 
	float salerie ; 
}
s ;

int main(int argc, char *argv[]) {
//afficher	

	printf("enter your age : ");
	scanf("%d",&(s.age));
	printf("--------- \n");
	printf("enter your height : ");
	scanf("%f",&(s.height));
	printf("---------\n");
	printf("enter your salerie : "); 
	scanf("%f",&(s.salerie));
	printf("---------\n");
    printf("thanks ...");
	
	return 0;
}
