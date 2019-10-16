#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int list_players [30] [3];
 int player = 0;
 

for(player=0;player<4;player++){
	printf("Give me number of the player  : ");
	scanf("%d", &list_players[player] [0]);
	printf("Give me his age : ");
	scanf("%d", &list_players[player] [1]);

}
printf("\n\t List of the players \n");

for(player=0;player<4;player++){
	
	printf("Player %d,  Age = %d  \n",
                   list_players[player] [0],
                   list_players[player] [1]);
				    
}



	return 0;
}
