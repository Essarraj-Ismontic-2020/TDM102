#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int age=0;
	printf("Give your age:");
	scanf("%d",&age);
	if (age == 2)
{
    printf("Hello baby !");
}
else if (age == 6)
{
    printf("Hello Kid !");
}
else if (age == 12)
{
    printf("Hello Kid!");
}
else if (age == 16)
{
    printf("Hello Young !");
}
else if (age == 18)
{
    printf("Hello Man !");
}
else if (age == 68)
{
    printf("Hello Grandfather !");
}
else
{
    printf("unknow result for your age *_* ");
}
	return 0;
}
