#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int A,B;
 printf("Entrez deux nombres entiers :");
 scanf("%i %i", &A, &B);
 if (A > B) 
     printf("%i est plus grand que %i\n", A, B);
 else if (A < B) 
     printf("%i est plus petit que %i\n", A, B);
 else 
     printf("%i est égal à %i\n", A, B);
 return 0;
	return 0;
}
