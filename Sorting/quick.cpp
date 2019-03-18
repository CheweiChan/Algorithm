#include <stdio.h> 

#define size 10
int array[size]={2,5,9,1,4,3,6,8,7,0};

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}

int partition(int array[], int left, int right) { 
    int j=0,i = left - 1; 
    for(j = left; j < right; j++) { 
        if(array[j] <= array[right]) { 
            i++; 
            swap(&array[i], &array[j]); 
        } 
    } 

    swap(&array[i+1], &array[right]); 
    return i+1; 
} 

void quickSort(int array[], int left, int right) { 
    if(left < right) { 
        int q = partition(array, left, right); 
        quickSort(array, left, q-1); 
        quickSort(array, q+1, right); 
    } 
} 

int main()
{
	int i;
    printf("\nquick sort "); 

    quickSort(array,0,9);
  
    for(i = 0; i<size; i++)
    {
    	printf("%d ", array[i]);
    }
  return 0;
}
