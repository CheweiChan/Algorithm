#include<stdio.h>

int array[]={1,2,17,4,5,6,7,8,9,23,51,45,34};

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

int binary_search(int *array,int searchNum,int len)
{
    int i,firstNum,endNum,midNum;
	endNum=len - 1;
	BubbleSort(array,len);
		
	while(firstNum <= endNum)
	{
		midNum=(firstNum+endNum)/2;
		if(array[midNum] < searchNum)
			firstNum=midNum + 1;
		else if(array[midNum] > searchNum)
			endNum=midNum - 1;
		else
			return midNum+1;
	}	
	
	return 0;
}



int main(void)
{
	int index,len;
    len=(sizeof(array)/sizeof(int));
	index = binary_search(array,5,len);
	
	if(index)
		printf("Find Number");
	else
		printf("Not find");
}
