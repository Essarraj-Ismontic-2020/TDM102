#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int age = 18;

if (age >= 18) // Si l'âge est supérieur ou égal à 18
{
  printf ("Vous etes majeur !");
}
else if ( age > 4 ) // Sinon, si l'âge est au moins supérieur à 4 
{
  printf ("Bon t'es pas trop jeune quand meme...");
}
else // Sinon...
{
  printf ("Aga gaa aga gaaa"); // Langage bébé, vous pouvez pas comprendre
}


//Test OU
int  argent = 10;
if (age > 10 || argent > 100000)
{
    printf("Bienvenue chez PicsouBanque \n!");
}
else
{
    printf("Hors de ma vue, miserable !");
}
  //Construire un switch
  
  


	return 0;
}
