#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int nombre=0;
	while(nombre<10) 
	{
		nombre++;
		if(nombre==5)
		{break	}
		printf("le valeur de ce nombre dans case m�mmoire est %d".\n,nombre);
	}
	return 0;
}
