#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void visuel (int cam1, int cam2) {

     int cam3;
     
     cam3=cam2+cam1;
     
	 printf("%d",cam3);
     
     
}

int main(int argc, char *argv[]) {
	
	visuel (17 , 25);
	
	return 0;
}
