#include <stdio.h>

int fact(int);

int main()
{
  int num, factorial;
  printf("Enter the number: ");
  scanf("%d", &num);

  factorial = fact(num);
  printf("The factorial of %d is %d", num, factorial);
  return 0;
}
int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * fact(n - 1);
  }
}