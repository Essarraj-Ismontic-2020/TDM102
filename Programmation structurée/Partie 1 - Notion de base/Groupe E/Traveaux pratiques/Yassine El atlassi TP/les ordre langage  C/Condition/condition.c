#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 printf("Hello, i can know how old are you.\n");
    int A,B,Age;
    A=2019;
    printf("Which year you were born at: ");
    scanf("%d",&B);
    if (B<2019)
    {
      Age=A-B;
    printf("Great,you have %d years old",Age);
}
     else
     {
         Age=A-B;
         printf(" %d years old!How?",Age);
	return 0;
}
}
