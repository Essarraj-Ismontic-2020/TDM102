#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int tableau[4]={15,55,-58,53};
	int i;
	for(i=0;i<4;i++)
	{
		if(tableau[i] >0)
			printf("%d \n",tableau[i]);
	}
	
	return 0;
}
