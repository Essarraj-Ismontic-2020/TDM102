#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// mohamed laaroussi
int somme(int a , int b,int c);



int main(int argc, char *argv[]) {
	
	
          printf(" somme est%d",somme(20,20,30));
	
	
	return 0;
}


 int somme(int a,int b,int c )
{
	int somme;
	somme = a + b+ c;
	
return somme;	
} 
