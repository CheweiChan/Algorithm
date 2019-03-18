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


void selection(int *array,int len)
{
	int i=0,j=0;
	for(i=0;i<len;i++)
	{
	    for(j=i+1;j<len;j++)
	    {
		if(array[i]>array[j])
	            swap(&array[i],&array[j]);			
	    }					
	}
}

int main(void)
{
    int i;	
    selection(array,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);      
    }	
	
}
