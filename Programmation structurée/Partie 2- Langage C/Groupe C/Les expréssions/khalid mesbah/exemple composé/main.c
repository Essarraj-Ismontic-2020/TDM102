#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=2;
	int b=4; 
	int c=6;
	int result =36;
	int number;
	int one;
	int second;
	printf ("%d\n",a+b);
	printf("write the result of (2+4)*6 \n");
	scanf ("%d");
	if (result) {
	printf("true \n");
	}
	else {
		printf ("false \n");
	}
	printf("write a number bigger than 36 \n");
	scanf("%d",& number );
	if (number>36){
		printf("true \n");
	}
	else {
		printf  ("false \n");
	}
	printf(" the divission of 36/4 is : %d \n ",result/b);
	printf("give me one number \n");
	scanf("%d", & one);
	printf ("give me second number \n ");
	scanf ("%d", & second );
	printf ("soustraction : %d \n", one-second);
	return 0;
}
