#include <stdio.h>
#include <stdlib.h>

struct infos {
	char Nom [50]; 
	int age ; 
};

int main(int argc, char *argv[]) {
	
	struct infos T[4];
	int i ; 
	for(i=0;i<4;i++){
		printf("donner le Nom : "); 
		scanf("%s",&T[i].Nom);
		printf("donner l'age : "); 
		scanf("%d",&T[i].age); 
	}
	for(i=0;i<4;i++){
        printf("le Nom et %s et l'age et %d \n",T[i].Nom,T[i].age);
    }
	return 0;
}
