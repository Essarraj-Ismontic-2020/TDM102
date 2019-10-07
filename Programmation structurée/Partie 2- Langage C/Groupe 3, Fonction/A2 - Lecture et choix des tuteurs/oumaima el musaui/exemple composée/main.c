#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int valide (int a){
	if (a > 0){
		printf("le nombre %d est positive",a);
}else{
	printf(" le nombre %d est negative",a);
	
	
}


}


	
int main(int argc, char *argv[]) {
	int nombre;
	printf("donne une nombre:");
	scanf("%d",&nombre);
	valide(nombre);
	return 0;
}
