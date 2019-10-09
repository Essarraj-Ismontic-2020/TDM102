#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int dos ()
{
int a;
scanf("%d",&a);
printf("\n%d",a);
return a;
}

int main(int argc, char *argv[]) {
	dos();
	return 0;
}
