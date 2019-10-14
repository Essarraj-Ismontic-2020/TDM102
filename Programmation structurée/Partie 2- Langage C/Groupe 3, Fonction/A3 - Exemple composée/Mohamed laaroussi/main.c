#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float addition( float a, float b){
	float max;
	max=a+b;
	return max;
}
float substraction( float a, float b){
	float max;
	max=a-b;
	return max;
}
float multiplication( float a, float b){
	float max;
	max=a*b;
	return max;
}
float devesion(float a,float b){
	float max;
	max=a/b;
	return max;
}

float calcul(float a,float b, char op){
	float solution;
	switch (op){
	
	case'+':
		solution=addition(a,b);
		break;
	case'-':
		solution=substraction(a,b);
		break;
	case'*':
		solution=multiplication(a,b);
		break;
	case'/':
		solution=devesion(a,b);
		break;
	
		}
		
		return solution;
}

int main(int argc, char *argv[]){
	float a ;
	float b ;
	char op;
	float solution;
printf("donnez l'operation:");
	scanf("%c",&op);
	printf("donnez le premier nombre:");
	scanf("%f",&a);
	printf("donner la deuxeim nombre:");
	scanf("%f",&b);


	solution=calcul(a,b,op);
	printf("%f",solution);
	
	return 0;
  }
  
