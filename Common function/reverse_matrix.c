#include<stdio.h>

//intput  matrix[5]={1,2,3,4,5};
//output  matrix[5]={5,4,3,2,1}


static int reverse(int *x,int len)
{
int i,temp;
	for(i=0;i<(len/2);i++)
	{
		temp=x[i];
		x[i]=x[len-1-i];
		x[len-1-i]=temp;
	}       
}

int main(void)
{
	int matrix[5]={1,2,3,4,5};
	int i;
	reverse(matrix,5);
	
	for(i=0;i<5;i++)
	{
		printf("%d ",matrix[i]);
	}
	
}
