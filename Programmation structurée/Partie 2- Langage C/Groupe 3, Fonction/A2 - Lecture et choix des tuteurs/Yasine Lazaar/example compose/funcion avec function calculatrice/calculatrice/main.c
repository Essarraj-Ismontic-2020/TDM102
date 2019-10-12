#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float aditione (float x ,float y){
	float yes;
	yes=x+y;
	return yes;
}
float subsaction (float x ,float y){
	float yes ;
	yes=x-y;
	return yes;
}
float devition (float x ,float y){
	float yes ;
	yes=x*y;
	return yes;
}
float multiplication (float x ,float y){
	float yes ;
	yes=x/y;
	return yes;
}

float  calculatrice (float x ,float y,int op ){
	float yes = 0 ;
switch(op) {
   case 1 : 
      yes=aditione(x,y);
	break;
   case 2 :
	yes=subsaction(x,y);
	break;
	case 3 :
	yes=devition(x,y);
	break;
	case 4 :
	yes=multiplication(x,y);
	break;
	default:
		      yes=aditione(x,y);
}

  return yes;
}
int main(int argc, char *argv[]) {
	float x , y;
	int op ;
	printf(" donnez la x :");
	scanf("%f",&x);
		printf("1:aditione \n ");
			printf(" 2:subsaction \n");
				printf(" 3:devition\n");
					printf(" 4:multiplication\n");
		printf(" donnez la operation:");
	scanf("%d",&op);
		printf(" donnez la y :");
	scanf("%f",&y);
	calculatrice(x,y,op);
	return 0;
}
