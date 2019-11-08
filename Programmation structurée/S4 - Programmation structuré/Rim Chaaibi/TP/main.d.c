#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int utilisateur nom
	int utilisateur prenom;
	
	printf("Quel est votre nom ?");
	scanf("%s",utilisateur nom);
	printf("Quel votre prenom ?");
    scanf("%s",utilisateur prenom);
    
    printf("vous vous appelez %s %s",utilisateur prenom,utilisateur nom);

	return 0;
}
