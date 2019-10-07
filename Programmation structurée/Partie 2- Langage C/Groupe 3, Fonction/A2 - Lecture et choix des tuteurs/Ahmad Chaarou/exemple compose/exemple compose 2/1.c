#include <stdio.h>
#include <stdlib.h>

int nombree(){

	int nombre3;
     nombre3 = 20;
	return nombre3 ;
}


void somme(int nombre1, int nombre2){
	int somme ;
	somme = nombre1  + nombre2 + nombree();
	printf("somme est  %d\n",somme);	
}

int main(int argc, char *argv[]) {		
somme(10,10);
		
return 0;
}



