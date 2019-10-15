#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age=0;
	printf("Entrer votre age:");
	scanf("%d",&age);
	switch (age)
	 {
	  case 2:  printf("Salut bebe !"); 
   break;
	case 6:  printf("Salut gamin !"); 
   	break;
	 case 12:  printf("Salut jeune !"); 
	 break;
	 case 16:  printf("Salut ado !"); 
	 break; 			
	 case 18:  printf("Salut adulte !");  
	 break;
	case 68:  printf("Salut papy !"); 
	break;
	default:  printf("Je n'ai aucune phrase de prete pour ton age  ");  
		break; }


	return 0;
}
