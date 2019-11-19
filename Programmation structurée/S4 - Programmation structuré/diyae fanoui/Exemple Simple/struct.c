#include <stdio.h>
#include <stdlib.h>
struct stagaire {
	char nom[50];
	int id;
	
};

int main(int argc, char *argv[]) {
	struct stagaire A;
	printf("Entrer votre nom:");
	scanf("%s",A.nom);
	printf("Saisie votre ID:");
	scanf("%d",&A.id);
	printf("Nom : %s \n ID : %d",A.nom,A.id);
	return 0;
}
