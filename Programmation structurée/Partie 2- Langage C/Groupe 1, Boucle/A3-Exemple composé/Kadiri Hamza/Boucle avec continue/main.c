
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int h=0;
	while(h<10)
{
	h++;
	if (h==7)
	{break;}
	printf("On nomme ce nombre dans la case memmoire : %d\n", h);
	}
	return 0;
}

