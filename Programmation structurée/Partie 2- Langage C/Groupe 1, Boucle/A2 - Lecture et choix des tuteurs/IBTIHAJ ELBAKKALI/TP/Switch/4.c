#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
	int notes;
	
	printf("Tapez votre note:");
	scanf("%d",&notes);
	
	switch(notes) {
	case 20:
	printf("excellent \n");
	break;
	
	case 18:
	printf("tres bien \n");
	break;
	
	case 15:
	printf("Bien \n");
	break;
	
	case 12:
	printf("assez bien \n");
	break;
	
	case 10:
	printf("passable \n");
	break;
	
	case 5:
	printf("Redoublant \n");
	break;
	default:
		printf("Cette note est pas enregistre dans le systeme \n");
		break;
}

	return 0;
}
