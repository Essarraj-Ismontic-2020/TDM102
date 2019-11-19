#include <stdio.h>
#include <stdlib.h>

struct stagiair {
	int ID ; 
	char nom [50] ; 
};

int main(int argc, char *argv[]) {
	struct stagiair infos ; 
	printf("enter your name : ");
	scanf("%s",&(infos.nom));
	printf("enter your ID : ");
	scanf("%d",&(infos.ID));
	printf("nom : %s \n ID : %d",(infos.nom),(infos.ID));
	return 0;
}
