#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	double conversion(double euros)
{
    double francs = 0;
    
    francs = 6.55957 * euros;
    return francs;
} 
int main(int argc, char *argv[]) {
      
    printf("10 euros = %fF\n", conversion(10));
    printf("50 euros = %fF\n", conversion(50));
    printf("100 euros = %fF\n", conversion(100));
    printf("200 euros = %fF\n", conversion(200));
    
    return 0;
}

