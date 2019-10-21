#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float addition (float a, float b){
	float solution;
solution=a+b;
	return solution;
}
float soustraction(float a , float b){
	float solution;
solution=a-b;
	return solution;
}
float devision(float a,float b){
	float solution;
solution=a*b;
	return solution;
}
float multiplication(float a, float b){
	float solution;
	solution=a/b;
	return solution;
}
float calculatrice (float a, float b, char op){
	float solution;
	switch(op){
		
	
	case '+':
		solution=addition(a,b);
		break;
	
	case '-':
	    solution=soustraction(a,b);
	    break;
	
	case '*':
		solution=devision(a,b);
		break;
	
	case '/':
	solution=multiplication(a,b);
		break;

	}
	return solution;
	
}










int main(int argc, char *argv[]) {
	float a , b;
char op;
	printf("donnez op:");
	scanf("%c",&op);
	printf("donnez le nombre a:");
	scanf("%f",& a);
	printf("donnez le nombre b:");
	scanf("%f",& b);

	float solution=calculatrice(a,b,op);
	printf("%f",solution);
	return 0;
}
