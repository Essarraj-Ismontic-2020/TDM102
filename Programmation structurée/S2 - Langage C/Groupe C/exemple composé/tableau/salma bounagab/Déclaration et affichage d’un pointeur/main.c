#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age = 22;
    int *pointeurSurAge = &age;
 
    printf("%d", pointeurSurAge);
	return 0;
}
