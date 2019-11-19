#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct stagaire {
	char nom [100] ;
	int id [100] ;
};

int main(int argc, char *argv[]) {
	struct stagaire S1 ;
	printf ("donner votre nom :");
	scanf("%s",S1.nom);
	printf("donner votre id");
	scanf ("%d",S1.id);
	return 0;
}
