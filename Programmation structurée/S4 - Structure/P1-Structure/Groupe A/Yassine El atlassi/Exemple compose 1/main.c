#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nom[10];
    char prenom[10];
    int age;
} personne;

void saisir(personne *stagaire,int taille);
void affichage(personne *stagaire,int taille);

int main(int argc,char *argv[])
{
    //entrer

    personne stagaire[100]={"","",0};
    int taille;
    printf("Entrer le nombre des eleves: ");
    scanf("%d",&taille);
    saisir(stagaire,taille);
    affichage(stagaire,taille);

    return 0;
}
void saisir(personne *stagaire,int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("Enter le prenom de stagaire %d :",i);
        scanf("%s",stagaire[i].prenom);
        printf("entrer le nom de %s : ",stagaire[i].prenom);
        scanf("%s",stagaire[i].nom);
        printf("entrer l'age de %s %s : ",stagaire[i].prenom,stagaire[i].nom);
        scanf("%d",&stagaire[i].age);
    }
}
void affichage(personne *stagaire,int taille)
{
    int i;
    printf("\nAFFICHAGE:\n");
    for(i=0;i<taille;i++)
    {
        printf("%s %s: %d\n",stagaire[i].prenom,stagaire[i].nom,stagaire[i].age);
    }
}

