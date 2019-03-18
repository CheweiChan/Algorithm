#include<stdio.h>

#define size 10
int array[size]={2,5,9,1,4,3,6,8,7,0};

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}

void BubbleSort(int* array, int len)
{
    for(int i = 0; i < size-1; i++)     
    {
        for(int j = 1; j < size - i; j++)         
        {   
            if(array[j] < array[j - 1])       
            {
                swap(&array[j], &array[j-1]);                  
            }
            
        }   
    } 
}


int main(void)
{
	int i;	
	BubbleSort(array,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);      
    }	
	
}
