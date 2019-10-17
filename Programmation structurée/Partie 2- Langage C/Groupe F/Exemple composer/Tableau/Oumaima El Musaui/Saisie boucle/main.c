#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int list_members [30] [3];
 int member = 0;
 

for(member=0;member<4;member++){
	printf("Give me number of the member  : ");
	scanf("%d", &list_members[member] [0]);
	printf("Give me his age : ");
	scanf("%d", &list_members[member] [1]);

}
printf("\n\t List of the members \n");

for(member=0;member<4;member++){
	
	printf("Member %d,  Age = %d  \n",
                   list_members[member] [0],
                   list_members[member] [1]);
				    
}



	return 0;
}
