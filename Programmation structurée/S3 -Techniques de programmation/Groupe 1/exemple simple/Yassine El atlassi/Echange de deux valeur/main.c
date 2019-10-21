#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int premiernombre=0,deuxiemenombre=0,echange=0;
	//entrer 
	printf("Entre A le premier nombre: ");
	scanf("%d",&premiernombre);
	printf("Entre B le deuxieme nombre: ");
	scanf("%d",&deuxiemenombre);
	//traitement
	echange=premiernombre;
	premiernombre=deuxiemenombre;
	deuxiemenombre=echange;
	//sortir
	printf("\nA= %d \t B= %d",premiernombre,deuxiemenombre);
	return 0;
}
