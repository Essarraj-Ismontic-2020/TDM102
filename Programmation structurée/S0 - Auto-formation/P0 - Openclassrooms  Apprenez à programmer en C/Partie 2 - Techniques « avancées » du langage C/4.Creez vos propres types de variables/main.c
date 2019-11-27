#include <stdio.h>
#include <stdlib.h>
#include "Untitled1.h"
int main()
{
    Cordonnee lewel;
    Cordonnee *pointeurlewel=&lewel;
    pointeurlewel->x=5;
    pointeurlewel->y=4;


    printf("%d,%d\t",lewel.x,lewel.y);
    initial(&lewel);
    printf("%d,%d",lewel.x,lewel.y);
Personne one={"",""};
printf("%s %s",one.nom,one.prenom);
 return 0;
}
