#include <stdio.h>
#include <stdlib.h>

typedef struct stagiairs {
	int ID ; 
	int nom [50] ; 
}infos;
int main(int argc, char *argv[]) {
	
	struct stagiairs infos ; 
	printf("enter your name : ");
	scanf("%s",&(infos.nom));
	printf("enter your ID : ");
	scanf("%d",&(infos.ID));
	printf("nom : %s \n ID : %d",(infos.nom),(infos.ID));
	return 0;
}
