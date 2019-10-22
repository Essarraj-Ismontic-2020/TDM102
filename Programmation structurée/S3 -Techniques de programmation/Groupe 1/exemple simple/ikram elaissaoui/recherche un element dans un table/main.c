#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int T[5];
	int v;
	int R;
	int i;
	int index;
	for(i=0;i<5;i++){
	printf("donner les valeur dans la cas %d tableau: ",i);
	scanf("%d",&T[i]);}
	printf("donner la valeur a chercher:",v);
	scanf("%d",&v);
	for(index=0;index<5;index++)
	if(T[index]==v){
		R++;
		printf("le nombre %d est ce trouve %d fois",v,R);
	}
	return 0;
}
