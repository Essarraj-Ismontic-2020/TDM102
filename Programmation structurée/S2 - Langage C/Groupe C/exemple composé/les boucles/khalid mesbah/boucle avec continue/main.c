#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre =0;
	while (nombre<10){
		nombre++;
		if (nombre==5)
		{continue;} 
		printf ("la valeur de ce nombre dans la case memoire est %d \n",nombre);
	}
	return 0;
}
