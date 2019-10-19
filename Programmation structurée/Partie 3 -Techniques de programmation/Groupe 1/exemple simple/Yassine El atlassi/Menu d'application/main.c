#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float addition (float a ,float b){
	float soulution ;
	soulution = a+b;
	return soulution;
}
float soustraction(float a , float b){
	float soulution ;
	soulution = a-b;
	return soulution;
}
float devision (float a, float b){
	float soulution;
	soulution = a*b;
	return soulution ;
}
float multiplication( float a, float b ){
	float soulution ;
	soulution = a/b;
	return soulution;
}
float calculatrice ( float a , float b,char op){
	float soulution ;

	switch (op)
	{
	
		case '+' :
			soulution = addition ( a,b);
			break;
		case '-' :
				soulution = soustraction (a,b);
				break;
		case '*':
				soulution = devision (a,b);
				break;
		case '/' :
				soulution = multiplication (a,b);
				break ;
						
			
	}
	return soulution ;
}

int main(int argc, char *argv[]) {
printf("*****'Calculatrice'*****\nchoisir l'opperation que vous voullez choisir:\n.addition +  .soustraction -  .multiplication *  .division /: ");

//entrer
	char op ;
	scanf ("%c",&op);
	
	
	float a;
	printf("donnez le premier nombre:");
	scanf ("%f",&a);

	float b;
	printf("donnez le deuxime nombre:");
	scanf("%f",&b);

//traitement
	float soulution = calculatrice ( a , b , op);

//sortir
	printf ("le solution de %.2f %c %.2f = %.2f",a,op,b,soulution);
	return 0;
}

