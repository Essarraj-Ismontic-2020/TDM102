#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    printf("====MORE OR LESS====\n 'v2.0' '03-10-2019'\n\n****************************\n");
    printf("Tips: this game is about Looking for a random number between 1 to 100\nEnjoy ^^\n");
    int a,lenombre,record=0;
    //entrer
    srand(time(NULL));
          lenombre=1+rand()%100;
          printf("let start.Guess the number:");
          //traitement
          while (a!=lenombre)
          {
          scanf("%d",&a);
          if (a<lenombre){printf("It's more !");}
          else if(a>lenombre) {printf("It is less !");}
          record++;
          }
          //sortir
          printf("well done,good job the number was '%d'. \nINFO:you found the mystery number in '%d moves'. ",lenombre,record);

    return 0;
}


