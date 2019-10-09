#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age=0;
	while (age!=30){
		printf ("how old are you?\n");
		scanf ("%d",&age);
	}
	return 0;
}
