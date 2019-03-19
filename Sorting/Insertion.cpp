#include<stdio.h>

#define size 10
int array[size]={2,5,9,1,4,3,6,8,7,0};

int insert(int array[], int number, int len)
{
  int j = len;
  while(number < array[j])
  {
      array[j+1] = array[j];
      j--;
  }
  array[j+1] = number;
  return 0;
}

int insort(int array[], int len) 
{
  int i;
  for(i = 1; i<len; i++)
  {
      insert(array, array[i], i-1);
  }
  return 0;
}
 
int main()
{
    int i;
    printf("\ninsertion sort "); 
    insort(array, size);
    for(i = 0; i<size; i++)
    {
    	printf("%d ", array[i]);
    }
  return 0;
}

