#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float prix ;
    float n ; 
    printf("ecrire le nombre de copies \n "); 
    scanf("%f",&n);
    if (n>0 && n <10){
    	prix = n*0.5;
    	printf("le prix est %f",n*0.5);
	}
	else if (n>=10&&n<20){
		prix = n*0.4 ; 
		printf("le prix est %f",n*0.4);
	}
	else if (n>=20&&n<30){
		prix = n*0.3 ; 
		printf("le prix est %f",n*0.3);
	}
	else {
		prix = n*0.2 ; 
		printf("le prix est %f",n*0.2);
	}	
	return 0;
}
