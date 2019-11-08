#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int key=0;
	printf("Donnee un nombre: ");
	while(key!=5)
    {
       scanf("%d",&key);
    }
	return 0;
}
