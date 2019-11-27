#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Prototype de la fonction d'affichage
void affiche(int *tableau, int tailleTableau);
 
int main(int argc, char *argv[])
{
    int tableau[4] = {10, 15, 3};
 
    // On affiche le contenu du tableau
    affiche(tableau, 4);
 
    return 0;
}
 
void affiche(int *tableau, int tailleTableau)
{
    int i;
 
    for (i = 0 ; i < tailleTableau ; i++)
    {
        printf("%d\n", tableau[i]);
    }
}
