#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int liste_stagiaires[30] [3];
 int indice = 0;
 

for(indice=0;indice<4;indice++){

	printf("Donnez le numero du stagiaire : ");
	scanf("%d", &liste_stagiaires[indice] [0]);
	printf("Donnez l'age de stagiaire: ");
	scanf("%d", &liste_stagiaires[indice] [1]);

}
printf("\n\t Liste des stagiaires \n");

for(indice = 0 ;indice < 4;indice++){
	
	printf("Stagiaire %d,  Age = %d  \n",
                   liste_stagiaires[indice] [0],
                   liste_stagiaires[indice] [1]);
				    
}



	return 0;
}
