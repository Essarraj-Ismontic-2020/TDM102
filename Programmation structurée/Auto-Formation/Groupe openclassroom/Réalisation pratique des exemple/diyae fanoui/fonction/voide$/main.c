#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	void punition(int nombreDeLignes)
{
    int i;
    
    for (i = 0 ; i < nombreDeLignes ; i++)
    {
        printf("Je ne dois pas recopier mon voisin\n");
    }    
}    

int main(int argc, char *argv[]) {    
    punition(10);
    
    return 0;
}

