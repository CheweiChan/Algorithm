//
//  main.c
//  sort
//
//  Created by Chewei Chan on 2018/3/17.
//  Copyright © 2018年 Chewei Chan. All rights reserved.
//

#include <stdio.h>
#include"stdlib.h"
#include <time.h>
int temp,i,j,k,p;
int mat[10]={0};//={2,4,3,1,5,6,2,7,9,6};

void InsertSort(int* array, int size);
void swap(int *a,int *b);
void BubbleSort(int* array, int size);
void test(int* array,int size);
int main(int argc, const char * argv[]) {
    srand(time(0));
    
    mat[0]=(rand()%20);
    for (i=1; i<10;) {
    k=(rand()%20);
        //printf("%d\n",k);
#if 1
        for (j=0; j<i;j++) {
            if(k==mat[j])
            {
                break;
                
            }
        
            
        }
#endif
        if(i==j)
        {
            mat[i]=k;
            ++i;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",mat[i]);
        
    }
        printf("\n");
   // InsertSort(mat,10);
   BubbleSort(mat, 10);
   // test(mat, 10);
    printf("\n");
    
    
  
    

#if 0
    for(i=10;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
#if 1
            
            if(mat[j]>mat[j+1])
            {
             
                swap(&mat[j], &mat[j+1]);
            }
            
#else
            if(mat[j]<mat[j-1])
            {
                swap(&mat[j], &mat[j-1]);
                
            }
#endif
            
        }
        printf("\n");

        /*
        for (i=10; i>0; i--) {
            temp=mat[i];
            mat[i]=mat[i-1];
            mat[i-1]=temp;
        }
         */
    }
    #endif
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",mat[i]);
        
    }
    printf("end\n");
    
    //printf("Hello, World!\n");
    
    
    return 0;
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

void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
    
}
