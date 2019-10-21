#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float addition (float a, float b){
	float soulution;
	soulution=a+b;
	return soulution;
}
float soustraction (float a, float b){
    float soulution;
    soulution=a-b;
    return soulution;
}
float devesion (float a, float b){
	float soulution;
	soulution=a*b;
	return soulution;
}
float multiplication (float a, float b){
	float soulution;
	soulution=a/b;
	return soulution;
}
float calculatrice (float a, float b, char op){
	float soulution;
	switch (op){
		case '+':
			soulution= addition (a,b);
			break;
		case '-':
			soulution=soustraction (a,b);
		    break;
		case '*':
			soulution=devesion (a,b);
			break;
		case '/':
			soulution=multiplication(a,b);
			break;
	}
	return soulution;
}

int main(int argc, char *argv[]) {
	char op;
	printf("donner un operateur:");
	scanf ("%c",&op);
	float a;
	printf("donner un nombre:");
	scanf("%f",&a);
	float b;
	printf("donner un nombre:");
	scanf("%f",&b);
	float soulution=calculatrice (a, b, op);
	printf("%.2f",soulution);
	
	return 0;
}
