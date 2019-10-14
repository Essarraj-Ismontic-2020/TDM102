#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float prix ;
	float nombre ;
	printf("donnez le nombre de copies \n");
	scanf("%f",&nombre);
	if (nombre>0 && nombre<10){
		prix = nombre*0.50;
		printf("le prix est %f",nombre*0.50);
	}
	else if (nombre>=10&&nombre<20){
		prix = nombre*0.40;
		printf("le prix est %f", nombre*0.40);
	}
	else if (nombre>=20&&nombre<30){
		prix = nombre*0.30 ;
		printf("le prix est %f",nombre*0.30);
	}
	else{
	}
	
	return 0;

