#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int main(int argc, char *argv[]) {
	int age;
	
	printf("Tapez votre Age:");
	scanf("%d",&age);
	
	switch(age) {
	case 20:
	printf(" Les jeunes\n");
	break;
	
	case 18:
	printf("Maturité \n");
	break;
	
	case 15:
	printf("Adolescence \n");
	break;
	
	
	case 10:
	printf("Enfance  \n");
	break;
	

	default:
		printf("Cette age est pas enregistre dans le systeme \n");
		break;
}

	return 0;
}
