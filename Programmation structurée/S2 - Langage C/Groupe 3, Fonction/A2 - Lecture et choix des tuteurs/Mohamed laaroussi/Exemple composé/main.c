#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void devision(int a , int b);
int verifier(int b);


int main(int argc, char *argv[]) {
	devision(10,2);
	return 0;
}



void devision(int a , int b){
	if(verifier(b)==0) { 
		printf("impossible cette devesion sur 0");
		}else {
	printf("la division %d sur %d est %d",a,b,a/b);
	}
	return; 
}


int verifier(int b){
	if(b==0){
		return 0;
		}else{
		return 1;
			}
	
	
}
