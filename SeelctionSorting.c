#include <stdio.h>

void SelectionSort(int arr[], int size)
{
  int min, temp;
  for (int i = 0; i < size; i++)
  {
    min = i;
    for (int j = i+1; j < size; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

int main()
{
  int arr[] = {5, 4, 8, 2, 3};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  SelectionSort(arr, size);
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}