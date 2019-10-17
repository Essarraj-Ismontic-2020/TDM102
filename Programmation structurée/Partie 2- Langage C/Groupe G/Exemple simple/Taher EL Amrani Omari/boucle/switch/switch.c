#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a ;
		printf("what is your current level: \n");
	scanf("%d",&a);
	
	
	switch(a) {

case 1:
  printf("you are a newbie now!");
  break;
case 5:
  printf("you are a novice now!");
  break;
case 10:
  printf("you are talented now!");
  break;
case 20:
  printf("you are skilled now!");
  break;
case 30:
  printf("you are seasoned now!");
  break;
case 40 :
  printf("you are an expert now!");
  break;
  case 100 :
  printf("you are OP now!");
  break;
default:
  printf("keep working on your level to reach the next level!");
  break;
}

	
	return 0;
}
