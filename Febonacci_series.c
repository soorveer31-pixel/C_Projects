#include <stdio.h>

int series(int);

int main()
{
  int n, fibonacci;
  printf("Enter the terms: ");
  scanf("%d", &n);
  fibonacci = series(n);
  printf("The fibonacci value at %d place is %d", n, fibonacci);
  return 0;
}

int series(int num)
{
  if (num == 1)
  {
    return 0;
  }
  else if (num == 2)
  {
    return 1;
  }
  else
  {
    return series(num - 2) + series(num - 1);
  }
}