#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre = 20 ;
	while (nombre < 30){
		nombre ++ ;
		if ( nombre == 25)
		{continue ;
		}
		printf (" la valeur de ce nombre dans la case memoire est %d\n", nombre);
	}
	return 0;
}
