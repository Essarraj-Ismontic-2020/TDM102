#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main(int argc, char *argv[])
{
    FILE* fichier = NULL;
    char age[MAX] = "";

    fichier = fopen("test.txt", "r");

    if (fichier != NULL)
    {
        fgets(age,MAX,fichier);
        printf("%s",age);
        fclose(fichier);
    }

    return 0;
}
