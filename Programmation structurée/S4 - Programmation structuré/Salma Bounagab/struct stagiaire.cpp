#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stagiaire{
char nom[89];
int id[501];
int Tel[50];	
} stagiaire;
int main() {
	struct stagiaire s1,s2;
	
	printf("donnez le nom du stagiaire:");
	scanf("%s",s1.nom);
	printf("donnez l'id du stagiaire:");
	scanf("%d",s1.id);
	printf("donnez le numero du stagiaire:");
	scanf("%d",s1.Tel);
	
	printf("donnez le nom du stagiaire:");
	scanf("%s",s2.nom);
	printf("donnez l'id du stagiaire:");
	scanf("%d",s2.id);
	printf("donnez le numero du stagiaire:");
	scanf("%d",s2.Tel);
	
	printf("les donnees des stagiaires sont: \n %s, %d, %d \n %s, %d, %d",s1.nom,s1.id[0],s1.Tel[0],s2.nom,s2.id[0],s2.Tel[0]);
}
