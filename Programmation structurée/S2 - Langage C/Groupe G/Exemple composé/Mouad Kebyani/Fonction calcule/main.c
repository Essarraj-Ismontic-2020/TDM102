#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Mouad Kebyani
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

	char op ;
	printf ("donner votre op ");
	scanf ("%c",&op);
	
	
	float a;
	printf("donnez un nombre");
	scanf ("%f",&a);

	float b;
	printf("donnez un nombre");
	scanf("%f",&b);

	float soulution = calculatrice ( a , b , op);
	printf ("%f",soulution);
	return 0;
}
