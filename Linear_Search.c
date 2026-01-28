#include<stdio.h>

int Searching(int arr[],int size,int find){
  int index;
  for (int i = 0; i < size; i++)
  {
    if (find == arr[i])
    {
      index = arr[i];
      return index;
    }else
    {
      return -1;
    }
  }
  
}
int main(){
  int arr[5];
  int size = sizeof(arr)/sizeof(arr[0]);
  int find;
  for (int i = 0; i < size; i++)
  {
    printf("Enter the value: ");
    scanf("%d",&arr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    pritf
  int found = Searching(arr,size,find)
  return 0;
}