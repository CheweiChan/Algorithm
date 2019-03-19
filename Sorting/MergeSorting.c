#include<stdio.h>

#define size 10
int array1[size]={2,5,9,1,4,3,6,8,7,0};
int array2[size]={18,1,9,10,4,13,6,12,7,14};
int array3[size]={0};
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
    for( i = 0; i < size-1; i++)     
    {
        for( j = 1; j < size - i; j++)         
        {   
            if(array[j] < array[j - 1])       
            {
                swap(&array[j], &array[j-1]);                  
            }
            
        }   
    } 
}




void MergeSorting(int *array1,int len1,int *array2,int len2,int *array3)
{
	int i=0,j=0,k=0;
	while(i<len1 && j<len2)
	{
		if(array1[i]<array2[j])
			array3[k++]=array1[i++];
		else
			array3[k++]=array2[j++];
	}	
	while(i<len1)
		array3[k++]=array1[i++];	
	while(j<len2)
		array3[k++]=array2[j++];	
}



int main(void)
{
	int i;	
	BubbleSort(array1,size);
	BubbleSort(array2,size);
	MergeSorting(array1,size,array2,size,array3);
    for(i=0;i<size*2;i++)
    {
        printf("%d ",array3[i]);      
    }	
	
}
