#include <stdio.h>
#include <string.h>

int main(){
  char word[20];
  int IsPalin = 1;

  printf("Enter the word: ");
  fgets(word,sizeof(word),stdin);
  word[strcspn(word,"\n")]='\0';

  for (int i = 0; i < strlen(word)/2; i++)
  {
    if (word[i] != word[strlen(word)-i-1])
    {
      IsPalin = 0;
      break;
    }
  }
  if (IsPalin)
  {
    printf("Word is Palindrome\n");
  }else
  {
    printf("Word is not Palindrome\n");
  }
  return 0;
}