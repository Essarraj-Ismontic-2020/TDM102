#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int addition (int m ,int y){
	int soulution ;
	soulution = m+y;
	return soulution;
}
int soustraction(int m , int y){
	int soulution ;
	soulution = m-y;
	return soulution;
}
int devision (int m, int y){
	int soulution;
	soulution = m*y;
	return soulution ;
}
int multiplication( int m, int y ){
	int soulution ;
	soulution = m/y;
	return soulution;
}
int calculatrice ( int m , int y,char op){
	int soulution ;

	switch (op)
	{
	
		case '+' :
			soulution = addition (m,y);
			break;
			case '-' :
				soulution = soustraction (m,y);
				break;
				case '*':
					soulution = devision (m,y);
					break;
					case '/' :
						soulution = multiplication (m,y);
						break ;
						
			
	}
	return soulution ;
}

int main(int argc, char *argv[]) {

	char op ;
	printf ("give me your operation : ");
	scanf ("%c",&op);
	
	
	int m;
	printf("give me a 1st number : ");
	scanf ("%d",&m);

	int y;
	printf("give a 2nd number : ");
	scanf("%d",&y);

	int soulution = calculatrice ( m , y , op);
	printf ("%d",soulution);
	return 0;
}
