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

int interpolation_search(int *array,int searchNum,int len)
{
	int upper=len-1;
	int low=0,mid=0;
	while(upper >= low)
	{
		mid =((upper - low) * (searchNum - array[low]))/(array[upper] - array[low])+low;
		
		if(mid < low || mid > upper)
			break;
		if(searchNum < array[mid])
			upper = mid -1;
		else if(searchNum > array[mid])
			low = mid +1;
		else 
			return mid+1;
	}	
	
	return 0;
	
}



int main(void)
{
	int i,len,index;
	len=(sizeof(array)/sizeof(int));	
	BubbleSort(array,len);
	index = interpolation_search(array,8,len);

	if(index)
		printf("Find Number");
	else
		printf("Not find");
	
}
