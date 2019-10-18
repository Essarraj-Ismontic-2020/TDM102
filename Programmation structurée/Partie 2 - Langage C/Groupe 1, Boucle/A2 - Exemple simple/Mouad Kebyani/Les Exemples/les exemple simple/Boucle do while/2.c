#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int taille = 0;
   do  
      {  
	    printf("Salut votre taille est %d\n",taille);   
       taille++;  
	  }  while (taille < 10);

	return 0;
}
