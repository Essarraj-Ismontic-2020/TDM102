#include <stdio.h>
#include <stdlib.h>

struct stagaire
{
	char nom[20];
	int id;
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct stagaire Chaarou;
	scanf("%s", &Chaarou.nom);
	scanf("%d",&Chaarou.id);
	printf("nom: %s \n id: %d",Chaarou.nom,Chaarou.id);
	return 0;
}
