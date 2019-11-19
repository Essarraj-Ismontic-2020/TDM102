#include <stdio.h>
#include <stdlib.h>
typedef struct note note;
struct note
{
    char nom[50];
    int math;
    int pc;
    int svt;
};
int main()
{
    note stagaire[100];
    int i;
    int studentNumbers=0;
    printf("Put students numbers:");
    scanf("%d",&studentNumbers);
    for(i=0;i<studentNumbers;i++)
    {
    	printf("\nStudent %d:what ur name: ",i+1);
    	scanf("%s",stagaire[i].nom);
    	printf("%s,what ur SVT note:",stagaire[i].nom);
    	scanf("%d",&stagaire[i].svt);
	}
//afichage
	for(i=0;i<studentNumbers;i++)
    {
		printf("%s : %d\n",stagaire[i].nom,stagaire[i].svt);
	}
    return 0;
}
