#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int I;
    int choix;
	int m[100]={97,98,99,100,101,109,117,113,120,115,111,107,108,109,102,103,105,104,112,114,106,110,115,116,118,119};
   
     printf(" do you want to see a board ? type 1 for Yes and 0 for No\n");
	   scanf("%d",&choix);
	   if (choix==1){
	     for  (I=0;I<6;I++){
		 
	   	printf("okay then give me your number between 0-25 and i will give you a caractere : ");
	    scanf("%d",&I);
  	
 
 printf("your board is : %c \n ", m[I]);}
}

else  {
	printf("okay thanks !! \n");
}
	return 0;
}

