#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j;
	  for ( i = 0; i <= 1000; ++i)
        for ( j = i; j <= 1000; ++j)
            if (i * j == 1000) 
                printf ("%d * %d = 1000 \n", i, j);
	return 0;
}
