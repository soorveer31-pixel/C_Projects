#include <stdio.h>

int main(){
  int M[3][3];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      M[i][j] = i + 2*j;
    }
  }
  
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ",M[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}