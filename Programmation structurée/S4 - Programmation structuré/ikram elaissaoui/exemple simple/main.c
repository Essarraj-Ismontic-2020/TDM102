#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct stagaire stagaire;
 struct stagaire
{
	char nom[10];
	int ID;
};

int main(int argc, char *argv[]) {
	stagaire personneA;
	scanf("%s",&personneA.nom);
	scanf("%d",&personneA.ID);
	printf("nom :%s\n ID :%d",personneA.nom,personneA.ID);
	
	return 0;
}
