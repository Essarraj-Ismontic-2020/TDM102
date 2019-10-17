#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[7];
    int m;
    for(m=0;m<7;m++)
    {  
    printf("Give me a number :");
    scanf("%d",&T[m]);
    }
    printf("%d %d %d %d %d %d %d", T[0],T[1],T[2],T[3],T[4],T[5],T[6]);

    return 0;
}

