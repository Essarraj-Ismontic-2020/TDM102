#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float addition(float nomber1,float nomber2){
	
	float solution;
	solution = nomber1 + nomber2;
	return solution;
float soustraction(float)	
}//là on arrete la fonction en fermant la parenthese



float calcul(float nomber1,float nomber2,char operation){

	
switch (operation){
	
	case '+':
		printf("ntina khtarti %f",addition(nomber1,nomber2));
		break;
	case '-':
				printf("ntina khtarti %c",operation);
		break;
	case '*':
				printf("ntina khtarti %c",operation);
		break;
	case '/':
				printf("ntina khtarti %c",operation);
		break;
	
}
	
	
	
	
	
}



int main(int argc, char *argv[]) {
	
   float nomber1;
   float nomber2;
   char operation;
   printf("donne le operation \n");
   scanf("%c",&operation);
   
   printf("donne nombre1 \n");
   scanf("%f",&nomber1);
   
   printf("donne nombre2 \n");
   scanf("%f",&nomber2);
   
calcul(nomber1,nomber2,operation);
	
	
	return 0;
}
