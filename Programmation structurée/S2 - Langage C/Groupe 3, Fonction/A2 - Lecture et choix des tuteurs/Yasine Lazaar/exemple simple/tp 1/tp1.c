#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void   somme  ( int a , int i);
int main(int argc, char *argv[]) {
	 somme (10,20);
	  
	return 0;
}
void somme (int a , int i ){
  int somme;
	somme=a+i; 
	printf (" somme est : %d ", somme  );
	
}
