#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age ;
	printf("donner votre age ");
	scanf("%d",&age);
	if (age >= 18)
{
  printf ("Vous etes majeur !");
}
printf("******************************************************\n");
	printf("donner votre age ");
	scanf("%d",&age);
if (age >= 18) 
{
  printf ("Vous etes majeur !");
}
else
{
  printf ("Ah c'est bete, vous etes mineur !");
}
printf("******************************************************\n");
	printf("donner votre age ");
	scanf("%d",&age);

if (age >= 18) 
{
  printf ("Vous etes majeur !");
}
else if ( age > 4 ) 
{
  printf ("Bon t'es pas trop jeune quand meme...");
}
else 
{
  printf ("Aga gaa aga gaaa"); 
}
printf("******************************************************\n");

	return 0;
}
