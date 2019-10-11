#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tableau[4];
    int i;
    for(i=0;i<4;i++)
    {  
    printf("Entrer la valeur dans le tableau:");
    scanf("%d",&tableau[i]);
    }
    printf("%d %d %d %d", tableau[0],tableau[1],tableau[2],tableau[3]);

    return 0;
}

