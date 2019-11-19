#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 struct stagiaire {
char nom [100];
int ID [100];
int CIN [100];
};


int main(int argc, char *argv[]) {
	struct stagiaire s1;
	printf("Donnez votre nom :");
	scanf("%s",s1.nom);
	printf("Donnez votre ID :");
	scanf("%d",s1.ID);
	printf("Donnez votre CIN :");
	scanf("%d",s1.CIN);
	
	return 0;
}
