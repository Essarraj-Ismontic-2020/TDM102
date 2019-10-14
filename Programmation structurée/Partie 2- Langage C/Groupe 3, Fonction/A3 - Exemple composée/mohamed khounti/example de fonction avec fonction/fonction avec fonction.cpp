#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int votreage(int date){
	int year = 2019;
	int age ;
	age = year - date ;
	
	
return age ;
}

int main(int argc, char *argv[]) {
	int date;
   printf("donne date de nes :");
   scanf("%d",&date);
   
   printf("votre age est %d",votreage(date));
	
	
	
	
	return 0;
}





