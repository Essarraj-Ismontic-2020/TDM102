#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


int age = 20;
if (age >= 18)
{
printf ("Vous etes majeur !\n");
}
else 
{
printf ("Ah c'est bete, vous etes mineur !");
}
	
if (age == 2)
{
printf("Salut bebe !");
}
else if (age == 6)
{
printf("Salut gamin !");
}
else if (age == 12)
{
printf("Salut jeune !");
}
else if (age == 16)
{
printf("Salut ado !");
}
else if (age == 18)
{
printf("Salut adulte !");
}
else if (age == 68)
{
printf("Salut papy !");
}
else
{
printf("Je n'ai aucune phrase de prete pour ton age \n");
}
switch (age)
{
case 2:
printf("Salut bebe !");
break;
case 6:
printf("Salut gamin !");
break;
case 12:
printf("Salut jeune !");
break;
case 16:
printf("Salut ado !");
break;
case 18:
printf("Salut adulte !");
break;
case 68:
printf("Salut papy !");
break;
default:
printf("Je n'ai aucune phrase de prete pour ton age \n");
break;
}
	return 0;
}
