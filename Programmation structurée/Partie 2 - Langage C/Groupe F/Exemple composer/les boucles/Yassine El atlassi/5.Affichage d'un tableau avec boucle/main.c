#include <stdio.h>
#include <stdlib.h>

int main()
{
    double tableau[4]={1.1,2.2,3.3,4.4};
    int i;
    for(i=0;i<4;i++)
    {
       printf("%.2lf\n",tableau[i]);
    }

    return 0;
}

