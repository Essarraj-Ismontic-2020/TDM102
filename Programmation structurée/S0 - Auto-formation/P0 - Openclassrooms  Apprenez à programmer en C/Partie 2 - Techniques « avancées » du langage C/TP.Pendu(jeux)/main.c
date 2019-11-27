#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "head.h"
#define MAX 15

int randomWord(char *secretword);
int main()
{
printf("====PENDU====\n 'v1.0' '29-10-2019'\n\n");
printf("TIPS: this game is about guessing a hidden word letter by letter in 10 Attempts\n");
printf("INFO:words's game in English\n");
printf("Enjoy ^^\n");
char key;
while(key!='Y')
{
printf("___________________________________________\n\n");
char secretWord[MAX]="";
randomWord(secretWord);
int lengthWord=0;
char playWord[MAX]="";
lengthWord=strlen(secretWord);
int i;
for(i=0;i<lengthWord;i++){playWord[i]= '*';}
int attempts=10;
char myLetter;
while (attempts>0 && strcmp(secretWord,playWord)!=0)
{
    int correct=0;
printf("You have %d attempts\n",attempts);
printf("Secret word have %d letters: %s\n",lengthWord,playWord);
printf("Submit a letter: ");
myLetter=lireCaractere();
for(i=0;i<lengthWord;i++)
{
   if (myLetter==secretWord[i])
   {
       playWord[i]=secretWord[i];
       correct=1;
   }
}
if (correct==0)
{
    attempts--;
}
}
printf("\n___________________________________________\n\n");
if (strcmp(secretWord,playWord)==0)
{
    printf("CONGRATULATION! the word was: '%s'\n\n",secretWord);
}
else
{
    printf("GAMEOVER the word was: '%s' have a good luck next time.\n\n",secretWord);
}
printf("Do you want exit:yes/no.\n\t->");
key=lireCaractere();
}
    return 0;
}
////////////////////////////////
int randomWord(char *secretword)
{
    int character=0,wordsNumber=0,chosenWord=0;
    FILE *fichier=NULL;
    fichier=fopen("words.txt","r");
    if (fichier==NULL)
    {
        printf("Eror in reading of words file.");
        return 0;
    }
    while(character!=EOF)
    {
        character=getc(fichier);
        if (character=='\n')
        {
            wordsNumber++;
        }
    }
    chosenWord=randomNumber(wordsNumber);
    rewind(fichier);
    while(chosenWord>0)
    {
        character=getc(fichier);
        if(character=='\n')
        {
            chosenWord--;
        }
    }
    fgets(secretword,MAX,fichier);
    secretword[strlen(secretword)-1]='\0';
    fclose(fichier);
}
