//
//  appsort.c
//  sort
//
//  Created by Chewei Chan on 2018/3/22.
//  Copyright © 2018年 Chewei Chan. All rights reserved.
//

#include "appsort.h"

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}

void InsertSort(int* array, int size)

{
    
    for(int i = 1; i < size; i++)
        
    {
        
        for(int j = i; j > 0; j--)
            
        {
            
            if(array[j] < array[j - 1])
                
            {
                
                swap(&array[j], &array[j-1]);
                
            }
            
        }
        
    }
    
}
void BubbleSort(int* array, int size)

{
    
    for(int i = 0; i < size-1; i++)
        
    {
        // printf("%d",i);
        for(int j = 1; j < size - i; j++)
            
        {
            
            if(array[j] < array[j - 1])
                
            {
                swap(&array[j], &array[j-1]);
                
                
            }
            
        }
        
    }
    
}

void test(int* array,int size)
{
    
    for(int i=size-1;i>0;i--)
    {
        //  printf("%d",i);
        
        for(int j=0;j<i;j++)
        {
            
            if(array[j]>array[j+1])
            {
                
                swap(&array[j+1], &array[j]);
            }
            
            
        }
    }
}
void randnum(int* array,int size)
{
    int i,j,temp;
    srand((unsigned int)time(0));
    array[0]=rand()%size;
    for(i=1;i<size;)
    {
        temp=rand()%(size+20);
        for(j=0;j<i;j++)
        {
            if(temp==array[j])
            {
                break;
            }
            
        }
        if(i==j)
        {
            array[i]=temp;
            i++;
        }
        
    }
   
}

void print_array(int* array,int size)
{
    for (int i=0; i<size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}

void insertion(int* array,int size)
{
    int j=0,temp=0,cnt=0;
    for (int i=1; i<size; i++) {
        
        cnt=i;
        temp=array[i];
#if 0
        while (cnt>0&&array[cnt-1]>temp) {
            array[cnt]=array[cnt-1];
            cnt--;
        }
#else
        for (j=i; j>0;j--) {
            if(array[j-1]>temp)
            {
                array[j]=array[j-1];
            }
           else
               break;
        }
#endif
        swap(&temp, &array[j]);
        
        
    }
    
}







