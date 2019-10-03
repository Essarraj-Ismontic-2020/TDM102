#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1,n2,r;
	char op;
	
	printf("donnez 1er nombre :");
    scanf("%f",&n1);
    
    printf("+:addition\n");
	printf("-:soustraction\n");
	printf("*:multiplication\n");
	printf("\ndonnez votre choix: ");
	scanf("%s",&op);
	
    printf("donnez 2eme nombre :");
    scanf("%f",&n2);
    
	switch(op) 
	{ 
	  case '+': r=n1+n2;
	  printf ("la somme est: %f + %f = %f",n1,n2,r);
	            break ;
	  case '-': r=n1-n2;
	  printf ("la soustraction est: %f - %f = %f",n1,n2,r);
	            break ;
	  case '*': r=n1*n2;
	  printf ("la multiplication est: %f * %f = %f",n1,n2,r);
	             break ;
	   case'/': r=n1/n2;
	   
	   if(n2==0)
	   {
	   	printf("impossible!!");
	   }
	   else
	   {
	   	r=n1/n2;
	   	printf("%f/%f= %f",n1,n2,r);
	   }
	   break;
	   
	   default: printf("Entrer +,-,*,/");
	   
	return 0;
}
}
