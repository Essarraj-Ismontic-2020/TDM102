#include <stdio.h>
#include <stdlib.h>


double a(double largeur, double hauteur)
{
return largeur * hauteur;
}
int main(int argc, char *argv[])
{
printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", a(5, 10));
printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", a(2.5, 3.5));
printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", a(4.2, 9.7));
return 0;
}

