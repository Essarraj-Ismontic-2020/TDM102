#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct stagiaire_etude {
int tel [100];
int  Id [100];
char Nom [100];
char prenom[100];

}
etude;

int main(int argc, char *argv[]) {
 etude e1,e2;
	printf("donnez le  tel de stagaire e1: ");
	scanf("%d",e1.tel);
	printf("donnez le  Id de stagaire e1: ");
	scanf("%d",e1.Id);
	printf("donnez le  nom de stagaire e1: ");
	scanf("%s",e1.Nom);
		printf("donnez le  prenom de stagaire e1: ");
	scanf("%s",e1.prenom);

	printf("donnez le  tel de stagaire e2: ");
	scanf("%d",e2.tel);
	printf("donnez le  Id de stagaire e2: ");
	scanf("%d",e2.Id);
	printf("donnez le  nom de stagaire e2: ");
	scanf("%s",e2.Nom);
		printf("donnez le  prenom de stagaire e2: ");
			scanf("%s",e2.prenom);
				printf("같같stagaire e1같같");
	printf(" \n tel :%d  \n Id :%d  \n Nom :%s  \n prenom : %s ",e1.tel[0],e1.Id[0],e1.Nom,e1.prenom);
			printf("\n같같stagaire e2같같");
				printf(" \n tel :%d  \n Id :%d  \n Nom :%s  \n prenom : %s ",e2.tel[0],e2.Id[0],e2.Nom,e2.prenom);
	return 0;
}
