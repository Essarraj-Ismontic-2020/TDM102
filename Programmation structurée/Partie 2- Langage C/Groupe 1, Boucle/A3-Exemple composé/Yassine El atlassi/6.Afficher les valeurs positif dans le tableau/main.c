
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tableau[4]={18,-2,-35,96};
    int i;
    for(i=0;i<4;i++)
    { 
    if (tableau[i]>0)
       printf("%d\n",tableau[i]);
    }

    return 0;
}

