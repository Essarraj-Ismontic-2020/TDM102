#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

  int nombreDeVies = 5; // Au d�part, le joueur a 5 vies
  
  printf("Vous avez %d vies\n", nombreDeVies);
  printf("**** B A M ****\n"); // L� il se prend un grand coup sur la t�te
  nombreDeVies = 4; // Il vient de perdre une vie !
  printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);
  
  return 0;
}

