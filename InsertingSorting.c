#include <stdio.h>

void InsertSort(int arr[], int size)
{
  int key;
  for (int i = 1; i < size; i++)
  {
    key = arr[i];
    int j = i;
    while (j > 0 && arr[j - 1] > key)
    {
      arr[j] = arr[j - 1];
      j--;
    }
    arr[j] = key;
  }
}
int main()
{
  int arr[] = {3, 8, 2, 7, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
  InsertSort(arr, size);
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}