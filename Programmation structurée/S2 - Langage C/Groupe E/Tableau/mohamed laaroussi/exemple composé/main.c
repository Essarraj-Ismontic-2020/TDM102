#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


    int tableau[4], i = 0;

    tableau[0] = 33;
    tableau[1] = 24;
    tableau[2] = 345;
    tableau[3] = 6;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;

}
