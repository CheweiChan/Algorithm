#include<stdio.h>

int array[]={2,5,9,1,4,3,6,8,7,0};

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}

void BubbleSort(int* array, int len)
{
	int i=0,j=0;
    for(i = 0; i < len-1; i++)     
    {
        for(j = 1; j < len - i; j++)         
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
	int i,len;
	len=(sizeof(array)/sizeof(int));	
	BubbleSort(array,len);
    for(i=0;i<len;i++)
    {
        printf("%d ",array[i]);      
    }	
	
}
