#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
	float add(float a,float b){
		float soul ;
		soul =a+b;
		return soul ;
	}
	float soustraction(float a,float b){
		float soul;
		soul=a-b;
		return soul;
	}
	float dev(float a,float b){
	float soul;
		soul=a/b;
		return soul;
	}
		float mult(float a,float b){
	float soul;
		soul=a*b;
		return soul;
	}
		float calculatrice(float a,float b,char op){
			float soul;
			switch (op)	
		{
		case'+':
			soul=add(a,b);
			break;
			case'-':
			soul=soustraction(a,b);
			break;
			case'/':
			soul=dev(a,b);
			break;
			case'*':
			soul=mult(a,b);
			break;
		} return soul;
	}
		int main(int argc, char *argv[]) {
			char op;
			printf("donnez votre op");
			scanf("%f",&op);
			float a;
			printf("donnez un nombre");
			scanf("%f",&a);
			float b;
			printf("donnez un nombre");
			scanf("%f",&b);
			float soul= calculatrice (a,b,op);
			printf("%f",soul);
			
	return 0;
}
