#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	typedef struct point point;
	struct point
	{
		int x;
		int y;
		int z;
	};
	point pointA;
	printf("Donner cordonne X de point:");
	scanf("%d",&pointA.x);
	printf("Donner cordonne Y de point:");
	scanf("%d",&pointA.y);
	printf("Donner cordonne Z de point:");
	scanf("%d",&pointA.z);
	printf("\n Donc votre point a les cordonner (%d,%d,%d).",pointA.x,pointA.y,pointA.z);
	return 0;
}
