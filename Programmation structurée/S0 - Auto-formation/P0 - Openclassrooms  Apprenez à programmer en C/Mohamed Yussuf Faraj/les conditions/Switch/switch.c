#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age=0;
	printf("Give me your age:");
	scanf("%d",&age);
	switch (age)
	 {
	  case 2:  printf("Hello Baby!"); 
   break;
	case 6:  printf("Hello Kid !"); 
   	break;
	 case 12:  printf("Hello Young!"); 
	 break;
	 case 16:  printf("Hello Man !"); 
	 break; 			
	 case 18:  printf("Hello Man !");  
	 break;
	case 68:  printf("Hello Grandfather !"); 
	break;
	default:  printf("There's no result in this case that you want ' ");  
		break; }


	return 0;
}
