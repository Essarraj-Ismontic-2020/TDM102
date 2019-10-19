#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int T[5]={1,2,3,4,'\0'};
	int a=T;

	printf("write a number \n");
	scanf("%d",&a); 
	switch (a){
		case 1 : 
	   	printf("%d \n",T[0]);
		break ; 
		case 2 : 
	   	printf("%d \n",T[1]);
		break ; 
		case 3 : 
        printf("%d \n",T[2]);
		break ; 
		case 4 : 
		printf("%d \n",T[3]);
		break;
		default : 
		printf("error 404");
		break;
	}
	
	
	
	return 0;
}
