#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char choix;
    do
    {
        printf("Choisir une option dans le menu suivant : \
               \n\t Visualisation <1><return> \
               \n\t Modification <2><return> \
               \n\t Suppression <3><return> \
               \n\t Quitter <4><return> ") ;
        printf("\n\t\t Indiquez votre choix: ");
        scanf("%d",&i);
        switch(i)
        {
        case 1 :
            printf("Appel de l'affichage \n") ;
            break ;
        case 2 :
            printf("Appel de la modification \n") ;
            break ;
        case 3 :
            printf("Appel de la suppression \n") ;
            break ;
        case 4:
            printf("Vous avez quitte le programme, appuyer sur un button pour fermer \n");
            break;
        default:
            printf("SVP donnez un nombre entre 1 et 4 \n");
            break;
        }
                    }
    while ( i!=4 );

    return 0;
}
