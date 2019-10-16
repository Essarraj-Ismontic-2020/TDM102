#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned char TAILLE=strln(argv[1]);
	char PHRASE[TAILLE];int i;
	strcpy(PHRASE,argv[1]);
	printf("avant:%s\n",PHRASE);
	/*-------Cryptographie-----*/
	for(i=0;i!=TAILLE;i++);
		PHRASE[i]=PHRASE[i]+3;
		if
	
	/*-------------------------*/
	printf("aprés: %s\n",PHRASE);
	return 0;
}
