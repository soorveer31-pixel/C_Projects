#include <stdio.h>

int Searching(int arr[], int size, int find)
{
  int value = 0;
  for (int i = 0; i < size; i++)
  {
    if (find == arr[i])
    {
      value = arr[i];
      break;
    }
  }
  return value;
}

int main()
{
  int arr[5];
  int size = sizeof(arr) / sizeof(arr[0]);
  int find;
  for (int i = 0; i < size; i++)
  {
    printf("Enter the value: ");
    scanf("%d", &arr[i]);
  }
  printf("Enter the value to find: ");
  scanf("%d", &find);

  int search = Searching(arr, size, find);
  
  if (search)
  {
    printf("Number found");
  }
  else
  {
    printf("Number not found");
  }
  return 0;
}