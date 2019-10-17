
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char prenom[100]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};


    printf("hi! my name is khaled whats your name ? ");
    scanf("%s", prenom);
    printf("oh welcome %s, nice to meet you! \n", prenom);
    int i;
    for (i=0;i<27;i++);
    printf("%s, if you give a number between 0 and 25 i will back it to you as a character :",prenom);
    scanf("%d",&i);
    printf("well, your character is : << %c >>\n" ,prenom[i]);
    printf("do you like your character ? type 1 for yes / 0 for no \n");
    int choix;
    scanf("%d",&choix);
	if   (choix==1){
		printf("okay %s, enjoy ! and see you soon *-*\n",prenom);
	}else {
		printf("okay ! you can try typing a number between 0 and 25 again ");
		scanf("%d",&i);
    printf("Now your character is: << %c >> \n" ,prenom[i]);
    printf("have a good day %s, bye  *.-",prenom);
	}
	return 0;
}
