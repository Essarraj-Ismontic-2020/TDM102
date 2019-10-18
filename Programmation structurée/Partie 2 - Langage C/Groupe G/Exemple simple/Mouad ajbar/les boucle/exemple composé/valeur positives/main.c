#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int tab[4]={1,-2,-25,555};
	int c ;
for (c=0; c<4 ;c++)
{
	if(tab[c]>0){
	printf("%d \n",tab[c]);	
	}

}
	return 0;
}
