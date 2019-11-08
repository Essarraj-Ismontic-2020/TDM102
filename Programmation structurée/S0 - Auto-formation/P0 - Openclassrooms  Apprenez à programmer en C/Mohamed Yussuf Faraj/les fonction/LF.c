#include <stdio.h>
#include <stdlib.h>

int triple(int number)
{
    return 70 * number;
}    

int main(int argc, char *argv[])
{
    int numberEntre = 0, numberTriple = 0;
    
    printf("Give me a number... ");
    scanf("%d", &numberEntre);
    
    numberTriple = triple(numberEntre);
    printf("The triple of that number is :  %d\n", numberTriple);
    
    return 0;
}
