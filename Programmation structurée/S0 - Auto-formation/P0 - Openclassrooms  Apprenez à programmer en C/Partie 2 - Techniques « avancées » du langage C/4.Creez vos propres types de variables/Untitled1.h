#define MAXITI 10
enum Level
{
    EASY,MOYEN,HARD
};
typedef struct Cordonnee Cordonnee;
struct Cordonnee
{
    int x;
    int y;
};
void initial(Cordonnee* point)
{
    point->x=0;
    point->y=0;
}



typedef struct Personne Personne;
struct Personne
{
    char nom[10];
    char prenom[10];
};

void afficher()
{
        int nombreJoueur;
     Personne utilisateur[MAXITI] ;
     printf("entrer le nombre de joueur: ");
     scanf("%d",&nombreJoueur);
int i;
for (i=0;i<nombreJoueur;i++)
{
    printf("joueur %d Quel est votre nom ?", i);
    scanf("%s",utilisateur[i].nom);
    printf("Votre prenom ? ");
    scanf("%s", utilisateur[i].prenom);
}
for (i=0;i<nombreJoueur;i++)
{
    printf("Joueur %d:\n \t Nom:%s \tPrenom :%s\n",i,utilisateur[i].nom,utilisateur[i].prenom);
}
}
