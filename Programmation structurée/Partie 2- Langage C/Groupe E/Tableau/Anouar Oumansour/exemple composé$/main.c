#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


    int tableau[4], i = 0;

    tableau[0] = 22;
    tableau[1] = 44;
    tableau[2] = 355;
    tableau[3] = 6;

    for (i = 0 ; i < 4 ; i++)
    {
        printf("%d\n", tableau[i]);
    }

    return 0;

}
