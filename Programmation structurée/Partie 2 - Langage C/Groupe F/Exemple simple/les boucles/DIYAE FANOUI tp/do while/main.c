#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c=0;
	int b=10;
	do{
		printf("le numuro de stagire est : %d \n",c);
		c++;
	}while(c<10);
	printf("****************************************\n");
	do{
		printf("le numuro de stagier :%d \n",b);
		b--;		
	}while(b>0);
	
	return 0;
}
