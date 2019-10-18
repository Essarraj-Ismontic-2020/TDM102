
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5]={0,-1,-2,1,2};
    int m;
    for(m=0;m<5;m++)
    { 
    if (T[m]>0)
       printf("%d\n",T[m]);
    }

    return 0;
}

