#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float addition (float x ,float y){
	float yes;
	yes=x+y;
	return yes;
}
float substraction (float x ,float y){
	float yes ;
	yes=x-y;
	return yes;
}
float multi (float x ,float y){
	float yes ;
	yes=x*y;
	return yes;
}
float division (float x ,float y){
	float yes ;
	yes=x/y;
	return yes;
}

float  calculatrice (float x ,float y,int op ){
	
switch(op) {
	float yes ;
      yes=addition(x,y);
	case 1 : 
	printf(" la somme est : %f ",addition(x,y)  );
	break;
	yes=substraction(x,y);
	case 2 : printf(" la somme est : %f ",substraction(x,y)  );
	break;
	yes=multi(x,y);
	case 3 : printf(" la somme est : %f ",multi(x,y)  );
	break;
	yes=division(x,y);
	case 4 : printf(" la somme est : %f ",division(x,y)  );
	break;
	default:
		printf(" 'Error' entrez un nombre de 1 a 4 ");
}
}
int main(int argc, char *argv[]) {
	float x , y;
	int op , a=1 ;
	char o = 'n';
	while (o!='q') {
	printf(" donnez la x :");
	scanf("%f",&x);
		printf("1:addition \n ");
			printf(" 2:substraction \n");
				printf(" 3:multiplication\n");
					printf(" 4:division\n");
		printf(" donnez la operation:");
	scanf("%d",&op);
		printf(" donnez la y : ");
	scanf("%f",&y);
	calculatrice(x,y,op);
	printf("voulez vous quitter?");
	scanf("%s",&o);
}
	return 0;
}
