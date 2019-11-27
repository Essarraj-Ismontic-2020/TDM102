#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nombreDAmis = 0, i = 0;
    int* ageAmis = NULL; // Ce pointeur va servir de tableau apr�s l'appel du malloc

    // On demande le nombre d'amis � l'utilisateur
    printf("Combien d'amis avez-vous ? ");
    scanf("%d", &nombreDAmis);

    if (nombreDAmis > 0) // Il faut qu'il ait au moins un ami (je le plains un peu sinon :p)
    {
        ageAmis = malloc(nombreDAmis * sizeof(int)); // On alloue de la m�moire pour le tableau
        if (ageAmis == NULL) // On v�rifie si l'allocation a march� ou non
        {
            exit(0); // On arr�te tout
        }

        // On demande l'�ge des amis un � un
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("Quel age a l'ami numero %d ? ", i + 1);
            scanf("%d", &ageAmis[i]);
        }

        // On affiche les �ges stock�s un � un
        printf("\n\nVos amis ont les ages suivants :\n");
        for (i = 0 ; i < nombreDAmis ; i++)
        {
            printf("%d ans\n", ageAmis[i]);
        }

        // On lib�re la m�moire allou�e avec malloc, on n'en a plus besoin
        free(ageAmis);
    }

    return 0;
}
