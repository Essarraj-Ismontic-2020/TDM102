#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//the imperishable
int main(int argc, char *argv[]) {
	int k=0;
	printf("Give a number between 1-3 and i will give you something *-*:");
	scanf("%d",&k);
	switch (k)
	{
		case 1 :
		printf("you are so cute");
     break;
		case 2 :
				printf("you are genius ");
				break;
		case 3 :
				printf("keep it your mind");
				break;
		default:
			printf("we didn't agree on this");
		break ;
	}
			

	
	return 0;
}
