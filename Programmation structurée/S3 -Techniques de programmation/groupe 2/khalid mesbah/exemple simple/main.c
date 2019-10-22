#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
 //saisie 
    int T[15] ={4,7,8,15,15,13,22,17,4,7,4,15,4,13,22};
    int valeur,i,rep=0;
      printf("donne le valeur a rchercher:");
      scanf("%d",&valeur);
        //traitement 
        for (i=0;i<15;i++){
        	if (T[i]==valeur)
        	{rep++;
			}
		}
    printf("repetition de %d est %d ",valeur,rep);
	return 0;
}
