#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number=10;
	while (number<20)
	{
	number++;	
	if (number==15)
   	{break;}	
	printf("the number which in the list is : %d. \n",number);
	}
	return 0;
}
