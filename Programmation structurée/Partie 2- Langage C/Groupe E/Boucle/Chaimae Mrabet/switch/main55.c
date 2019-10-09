#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int notes;
	printf("donnez votre note:");
	scanf("%d",&notes);
	switch(notes){
		case 20:
			printf("excellent");
			break;
		case 15:
			printf("bien");
			break;
		case 12:
			printf("assez-bien");
			break;
		case 10:
			printf("passable");
			break;
		default:
			printf("Cette note est pas engeristree");
			break;
		
	}
	return 0;
}
