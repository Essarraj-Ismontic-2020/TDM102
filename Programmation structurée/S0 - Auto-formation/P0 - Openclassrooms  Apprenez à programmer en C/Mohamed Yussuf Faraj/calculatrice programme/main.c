#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int result = 0, number1 = 0, number2 = 0;
  // in request the numbers 1 and 2 to user :
  
  printf("Give me number 1 : ");
  scanf("%d", &number1);
  printf("Give me number 2 : ");
  scanf("%d", &number2);
  
  // Doing the calcul :
  
  result = number1 + number2;
  
  // And show the result on the monitor
  
  printf ("%d + %d = %d\n", number1, number2, result);
       
  return 0;
}
