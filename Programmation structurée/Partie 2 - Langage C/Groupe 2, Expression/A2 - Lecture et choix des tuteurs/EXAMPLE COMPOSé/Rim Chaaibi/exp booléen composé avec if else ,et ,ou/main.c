#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int A,B;
 printf("Entrez deux nombres entiers :");
 scanf("%i %i", &A, &B);
 if ((A > B) ||(A < B) ){
     printf("%i est different %i\n", A, B);
 }
 else {
     printf("%i est égal à %i\n", A, B);}
}


