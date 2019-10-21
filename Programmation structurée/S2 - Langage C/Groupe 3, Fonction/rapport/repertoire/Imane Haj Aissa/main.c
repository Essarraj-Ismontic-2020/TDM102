#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float addition (float a , float b){
	float soulution;
	soulution=a+b ;
	return soulution ;
	}
	float soustraction (float a , float b){
		float soulution;
		soulution=a-b;
		return soulution;
	
	}	
	float devesion (float a ,float b){
		float soulution;
		soulution=a/b;
		return soulution;
	}
	float multiplication(float a ,float b){
		float solution;
	solution=a*b;
	return solution;
	}
	float calculatrice (float a,float b,char op){
		float soulution;
		switch (op){
			
			
			
			case '+':
				soulution=addition(a,b);
				break;
				
				case'-':
					soulution=soustraction(a,b);
					break;
					
					case'/':
						soulution=devesion(a,b);
						break;
						
						case '*':
							soulution=multiplication(a,b);
							break;
							
						
							}
								return soulution;

}

int main(int argc, char *argv[]) {
	char op;
	printf("donnez votre op");
	scanf("%c",&op);
	float a ;
	printf("donnez un nombre");
	scanf("%f",&a);
	float b ;
	printf("donnez un nombre");
	scanf("%f",&b);
	float soulution=calculatrice(a,b,op);
	printf("%f",soulution);

	
	
	return 0;
}
