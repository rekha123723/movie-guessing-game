#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
char*movies[]={"RRR","KANTARA","KGF","SALAR","PUSHPA","BAAHUBALI","JERSEY","EEGA","100% LOVE","LOVE STORY","ARYA","OOPIRI","MANAM","SARRAINODU","GEETHA GOVINDAM"};
int movieCount = 15;
for (int m=0;m<movieCount;m++)
{
char*word = movies[m];
int length = strlen(word);
char guessed[20];
for(int i = 0; i < length; i++)guessed[i]='-';
guessed[length]='\0';
char guess;
int attempts =0,correct =0;
printf("\n GUESS THE MOVIE NAME(%d letters):\n",length);
while(correct<length){
printf("Current:%s\n",guessed);
printf("Enter a letter:");
scanf("%c",&guess);
guess = toupper(guess);
int found = 0;
for(int i = 0; i < length; i++){
if(word[i]==guess && guessed[i]=='-'){
 guessed[i]=guess;
 correct++;
 found=1;
 }
}
if(!found)printf("WRONG GUESS.\n");
attempts++;
}
printf("you guessed %s in %d attempts!\n,word,attempts);
}
printf("\n CONGRATULATIONS!THANKS FOR PLAYING.\n");
return 0; 
}