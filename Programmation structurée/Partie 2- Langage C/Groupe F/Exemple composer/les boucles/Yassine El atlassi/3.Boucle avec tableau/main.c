#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tableau[4]={1.1,2.2};
    int i;
    for(i=0;i<2;i++)
    {
       printf("%.2lf\n",tableau[i]);
    }

    return 0;
}

