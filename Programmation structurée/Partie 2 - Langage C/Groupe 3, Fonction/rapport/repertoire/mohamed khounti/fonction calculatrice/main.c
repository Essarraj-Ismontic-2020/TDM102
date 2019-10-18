#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float addition(float a , float b){
	float max;
	max = a+b;
	return max;
}
float substraction(float a , float b){
	float max;
	max = a-b;
	return max;
}
float devition(float a , float b){
	float max;
	max = a/b;
	return max;
}
float multiplicatin(float a , float b){
	float max;
	max = a*b;
	return max;
}




void calcul(float a ,float b , char operation){
	
switch (operation){
	float max;
	case '+':
	max =	addition(a,b);
	printf("le resulta est : %.2f  ",max);
	break;
	case '-':
	max =	substraction(a,b);
	printf("le resulta est : %.2f  ",max);
	break;
	case '/':
	max =	devition(a,b);
	printf("le resulta est : %.2f  ",max);
	break;
	case '*':
	max =	 multiplicatin(a,b);
	printf("le resulta est : %.2f  ",max);
	break;
	
	
}
	
	
	
}






int main(int argc, char *argv[]) {
	float nombre1;
	float nombre2;
   char operation;
	
	printf("donne le operation :  ");
	scanf("%c",&operation);
	
	printf("donne le nombre1 : ");
	scanf("%f",&nombre1);
	printf("donne le nombre2 :");
	scanf("%f",&nombre2);
	

	
	 calcul(nombre1 ,nombre2, operation);
	
	

	
	
	
	
	
	
	
	return 0;
}
