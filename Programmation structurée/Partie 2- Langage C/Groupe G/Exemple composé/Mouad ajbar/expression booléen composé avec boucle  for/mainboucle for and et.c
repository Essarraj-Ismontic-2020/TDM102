#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a;
	int b;
	for(a=0,b=0;a<=7,b<=7;a++,b++)
	{ 
	if(a>3&&a<8||b>5&&b<8)
	{
		printf("this is true \n");
	}
	else {
		printf("this is false \n");
	}

}
	
	return 0;
}
