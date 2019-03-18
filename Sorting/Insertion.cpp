#include<stdio.h>

int matrix[10]={2,5,9,1,4,3,6,8,7,0};
int insert(int matrix[], int number, int len)
{
  int j = len;
  while(number < matrix[j])
  {
    matrix[j+1] = matrix[j];
    j--;
  }
  matrix[j+1] = number;
  return 0;
}

int insort(int matrix[], int len) 
{
  int i;
  for(i = 1; i<len; i++)
  {
      insert(matrix, matrix[i], i-1);
  }
  printf("\nNumbers Sorted: ");
  for(i = 0; i<len; i++)
  {
    printf("%d ", matrix[i]);
  }
  printf("\n");
  return 0;
}
 
int main()
{
  printf("\ninsertion sort "); 

  insort(matrix, 10);
  return 0;
}

