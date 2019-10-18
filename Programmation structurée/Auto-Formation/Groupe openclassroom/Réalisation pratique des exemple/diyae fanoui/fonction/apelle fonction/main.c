#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int triple(int nombre)
{
    return 3 * nombre;
}    

int main(int argc, char *argv[]) {
	
    int nombreEntre = 0, nombreTriple = 0;
    
    printf("Entrez un nombre... ");
    scanf("%d", &nombreEntre);
    
    nombreTriple = triple(nombreEntre);
    printf("Le triple de ce nombre est %d\n", nombreTriple);
    
    return 0;
}

