
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int T[4]={647,-879,168,-8555};
	int i;
	for (i=0;i<4;i++)
	{
		if(T[i]>0)
		printf("%d\n" , T[i]);
	}
	return 0;
}

