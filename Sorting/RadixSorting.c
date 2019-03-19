#include<stdio.h>

#define size 17
#define maxradix 100
int array[size]={23,35,29,151,224,73,86,18,67,20,91,58,20,52,28,431,5};


void radixSort(int *data) {
    int temp[10][size] = {0}; 
    int order[10] = {0}; 
    
    int n = 1; 
    while(n <= maxradix) { 
        
        int i=0;
        int k = 0;
        int j;
        int lsd=0;
        for(i = 0; i < size; i++) { 
             lsd= ((data[i] / n) % 10); 
            temp[lsd][order[lsd]] = data[i]; 
            order[lsd]++; 
        } 
 
        for(i = 0; i < 10; i++) { 
            if(order[i] != 0)  {
                for(j = 0; j < order[i]; j++) { 
                    data[k++] = temp[i][j]; 
                } 
            }
            order[i] = 0; 
        } 
        n *= 10; 
    }     
}

int main()
{
	int i;
    printf("\nRadixSorting "); 

    radixSort(array);
  
    for(i = 0; i<size; i++)
    {
    	printf("%d ", array[i]);
    }
  return 0;
}


