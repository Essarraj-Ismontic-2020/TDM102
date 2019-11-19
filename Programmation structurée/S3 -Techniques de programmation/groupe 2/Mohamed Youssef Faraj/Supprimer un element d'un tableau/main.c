#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
 int T[50],i,N,supp;
    printf("N=");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("T[%d]=",i);
        scanf("%d",&T[i]);
    }
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("T[%d]=%d",i,T[i]);
    }
    printf("\n");
    printf("Donnez l'element a supprimer: ");
    scanf("%d",&supp);
    for(i=0;i<N;i++)
    {
        if(T[i]==supp)
        {
            while(i<N)
            {
                T[i]=T[i+1];
                i++;   
            }  
            break;
        }
        else if(i==N-1 && T[i]!=supp)
        {
            printf("element a supprimer introuvable: ");
            break;
        }  
    }
    N=N-1; 
    for(i=0;i<N;i++)
    {
        printf("T[%d]=%d    ",i,T[i]);
    }
    printf("\n");              
    return 0;
}
