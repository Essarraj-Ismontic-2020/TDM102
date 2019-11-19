#include <stdio.h>
#include <stdlib.h>
struct enfant {
	char nom[50];
	int age;
	
};

int main(int argc, char *argv[]) {
	struct enfant A;
	printf("Entrer nom de ton enfant : ");
	scanf("%s",A.nom);
	printf("Entrer age d'enfant : ");
	scanf("%d",&A.age);
	printf("Nom : %s \nAge : %d\n",A.nom,A.age);
	if(A.age>10){
		printf("ton enfant n'est pas accept dont cette ecole ");
	}
	else if(A.age<=10){
		printf("ton enfant est accepter dont cette ecole " );
	}
	return 0;
}
