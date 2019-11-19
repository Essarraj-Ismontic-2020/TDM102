#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 struct infos {
char Nom[100];
int age;
} ;
void saisie (struct infos *T){
	int i;
	 for (i=0;i<4;i++){
	 
	 printf ("donnez le nom:");
	 scanf("%s",T[i].Nom);
	 printf ("donnez l'age:");
	 scanf("%d",&T[i].age);
    }
}
	void afficher (struct infos *T){
		int i;
	 for (i=0;i<4;i++){
	  printf ("bonjour le stagiaire %s age de %d ans \n",T[i].Nom,T[i].age);  
    }
}
int main(int argc, char *argv[]) {
	struct infos T[4];
	saisie(T);
	afficher (T);
	
	return 0;
}
