#include<stdio.h>

int array[]={1,2,3,4,5,6,7,8,9,23,51,45,34};
int searchNum=5;


int main(void)
{
	int i,size;
	size=sizeof(array)/sizeof(int);
	for(i=0;i<size-1;i++)
	{
		if(array[i]==searchNum)
			break;
	}
	printf("\n idx=%d",i);
}
