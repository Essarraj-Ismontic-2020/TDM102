
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=8;
	int b=6;
	int c;
	int d=10;
	printf("write a numbre that equal 8+6!!\n");
	scanf("%d",&c);
	if(c==a+b){
		printf("you are righet \n");
	}
	else if (c>d || a<b){
		printf(" you're close to the correct answer\n");
	}
	else{
		printf("sorry you are wrong\n");
	}
	return 0;
}
