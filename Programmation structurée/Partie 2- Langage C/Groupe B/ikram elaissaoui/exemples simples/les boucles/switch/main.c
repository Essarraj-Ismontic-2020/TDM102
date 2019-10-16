#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int note;
	printf("saisir un nombre : ");
	scanf("%d",&note);
	switch(note)
	{
	     case 1:
			printf("salut 1 !");
			break;
			case 2:
				printf("salut 2 !");
				break;
					case 3:
						printf("salut 3 !");
						break;
						default :
							printf("j'ai aucune phrase prete pour ton note");
							break;
	}
	return 0;
}
