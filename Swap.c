#include <stdio.h>

void swap(int, int);

int main()
{
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);

  printf("a:%d b:%d\n", a, b);
  swap(a, b);
  printf("a:%d b:%d\n", a, b);
  return 0;
}
void swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
  printf("After Swaping\n");
  printf("a:%d b:%d\n", a, b);
}