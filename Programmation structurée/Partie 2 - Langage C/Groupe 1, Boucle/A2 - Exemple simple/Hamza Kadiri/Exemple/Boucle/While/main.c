#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i = 0;
    int b=1;

    while (i < 5)
    {
        printf("La variable i vaut %d\n", i);
        i++;
    }
 
	while (b<=2) {
		printf("La variable numero %d \n",b);
		b++;
	} 
    return 0;
}
