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
	
switch(op) {
	float yes ;
      yes=aditione(x,y);
	case 1 : 
	printf(" la somme est : %f ",aditione(x,y)  );
	break;
	yes=subsaction(x,y);
	case 2 : printf(" la somme est : %f ",subsaction(x,y)  );
	break;
	yes=devition(x,y);
	case 3 : printf(" la somme est : %f ",devition(x,y)  );
	break;
	yes=multiplication(x,y);
	case 4 : printf(" la somme est : %f ",multiplication(x,y)  );
	break;
	default:
		printf(" 'Error' entrez un nombre de 1 a 4 ");
}
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
