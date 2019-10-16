#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int a = 8 ; 
int b = 6 ; 
int c ; 
int d = 10 ; 
printf("write a number that Equal 8+6 !! \n ");
scanf("%d",&c); 
if (c==a+b){
	printf("you are right \n");
}
else if  (c>d||a<b){
	printf("you're close to the correct answer \n  ");
}
else{
	printf("sorry you are wrong \n");
}
	return 0;
}
