#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 struct stagiaire {
char nom [100];
int Id [100];
int tel [100];
};

int main(int argc, char *argv[]) {
	struct stagiaire s1;
	printf("donnez votre nom :");
	scanf ("%s",s1.nom);
	printf("donnez votr Id :");
	scanf("%d",s1.Id);
	printf("donnez votre numero de tel:");
	scanf("%d",s1.tel);
	return 0;
}
