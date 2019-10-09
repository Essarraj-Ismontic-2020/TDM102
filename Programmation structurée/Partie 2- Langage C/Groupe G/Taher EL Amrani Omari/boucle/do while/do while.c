#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age=0;
	
	do {
		printf ("how oold are you? \n");
		scanf ("%d",&age);
		
	}
	while (age <=20);
	return 0;
}
