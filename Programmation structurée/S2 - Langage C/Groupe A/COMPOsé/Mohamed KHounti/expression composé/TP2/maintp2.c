#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
    float prix ;
    float nombre ; 
    printf("ecrire le nombre de copies \n "); 
    scanf("%f",&nombre);
    if (nombre>0 && nombre <10){
    	prix = nombre*0.5;
    	printf("le prix est %f",nombre*0.5);
	}
	else if (nombre>=10&&nombre<20){
		prix = nombre*0.4 ; 
		printf("le prix est %f",nombre*0.4);
	}
	else if (nombre>=20&&nombre<30){
		prix = nombre*0.3 ; 
		printf("le prix est %f",nombre*0.3);
	}
	else {
		prix = nombre*0.2 ; 
		printf("le prix est %f",nombre*0.2);
	}	
		
	
	
	
	
	return 0;
}
