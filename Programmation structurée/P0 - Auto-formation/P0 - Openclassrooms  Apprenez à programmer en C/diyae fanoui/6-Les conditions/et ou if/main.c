#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age,argent ;
	printf("donner votre age\n ");
	scanf("%d",&age);
	if (age > 30 || argent > 100)
{
    printf("Bienvenue chez PicsouBanque !");
}
else
{
    printf("Hors de ma vue, miserable !");
}
	return 0;
}
