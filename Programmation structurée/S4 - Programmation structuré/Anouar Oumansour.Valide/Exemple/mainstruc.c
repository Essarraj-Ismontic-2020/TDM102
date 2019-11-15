#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
 char nom[20];
 int age;
 int tele;

}stagiaire;

void main() {
	stagiaire s1,s2;
	printf("Donnez le nom du stagiaire:");
	scanf("%s",&s1.nom);
	printf("Donnez l'age du stagiaire:");
	scanf("%d",&s1.age);
	printf("Donnez le tele du stagiaire:");
	scanf("%d",&s1.tele);
	
	printf("Donnez le nom du stagiaire:");
	scanf("%s",&s2.nom);
	printf("Donnez l'age du stagiaire:");
	scanf("%d",&s2.age);
	printf("Donnez le tele du stagiaire:");
	scanf("%d",&s2.tele);
	
	printf("Les informations du stagiaire 1 \n");
	printf("%s      , %d, %d",s1.nom,s1.age,s1.tele);
	printf("Les informations du stagiaire 2 \n");
	printf("%s      , %d, %d",s2.nom,s2.age,s2.tele);
}
