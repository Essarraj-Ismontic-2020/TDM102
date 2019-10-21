#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//affectation
	int nombre=0,doublenombre=0;
	int key=1;
	//entrer
	while (key)
	{
		
		printf("Entrer un nombre pour le doubler:");
		scanf("%d",&nombre);
		doublenombre=nombre*2;
		printf("le double de %d est: %d\n\n",nombre,doublenombre);
	//sortir
		printf("voulez vous rester: \t 1.rester ou -0.quitter\n");
		scanf("%d",&key);
	}
	return 0;
}
