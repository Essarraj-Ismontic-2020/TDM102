#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stagiaire {
	char Nom [100];
	int Id [100]
};
typedef struct stagiaire 
stagiaire;
int main(int argc, char *argv[]) {
 stagiaire s1 ;
	printf("donnez votre Nom :");
	scanf ("%s",s1.Nom);
	printf("donnez votre Id :");
	scanf("%d",s1.Id);
	return 0;
}
