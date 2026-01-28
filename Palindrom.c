#include <stdio.h>

int palindrome(int);

int main()
{
  int num, pal;

  printf("Enter the number: ");
  scanf("%d", &num);

  pal = palindrome(num);

  if (pal == num)
  {
    printf("The number is a palindrome");
  }
  else
  {
    printf("The number is not a palindrome");
  }
  return 0;
}

int palindrome(int num)
{
  static int res = 0;
  if (num <= 0)
  {
    return res;
  }
  res = res * 10 + (num % 10);
  return palindrome(num / 10);
}