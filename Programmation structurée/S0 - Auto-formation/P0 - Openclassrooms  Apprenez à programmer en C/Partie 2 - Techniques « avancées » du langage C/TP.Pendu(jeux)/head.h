#include <time.h>
char lireCaractere()
{
    char caractere =0;
    caractere= getchar();
    caractere= toupper(caractere);
    while (getchar()!= '\n') ;

    return caractere;
}
int randomNumber(int numberMax)
{
    srand(time(NULL));
    return rand()%numberMax;

}
