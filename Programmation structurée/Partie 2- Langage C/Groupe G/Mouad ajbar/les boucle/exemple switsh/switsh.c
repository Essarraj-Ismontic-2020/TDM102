#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;
	printf("donner un nombre entre 1et 5");
	scanf("%d",&a);
	switch(a)
	{
	case 1 :
	printf("hello 1");
	break;
	case 2:
		printf("hello 2");
		break;
		case 3:
			printf("hello 3");
			break;
				case 4:
			printf("hello 4");
			break;
				case 5:
			printf("hello 5");
			default:
				printf("svp donner un nombre entre 1et 5");
				break;
				
			
	}
	return 0;
}
