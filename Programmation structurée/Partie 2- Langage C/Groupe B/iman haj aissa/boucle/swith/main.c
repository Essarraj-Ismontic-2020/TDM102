#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//iman haj aissa
int main(int argc, char *argv[]) {
	int notes ;
	printf ("donne votre note:");
	scanf("%d",&notes);
	
	switch (notes){
	
	case 20:
	printf ("exellente");
	break;
	
	
    case 18:
    	printf("bien");
	break;


    case 15:
    printf ("trés bien");
	break;
	
	defaut:
	printf("n est pas enrigtré");
	break;	
}
	
		return 0;
}
