#include <stdio.h>
#include <stdlib.h>

#define MAX_HASH_SIZE 8 
#define DATA_SIZE 8  
int hashTable[MAX_HASH_SIZE];  
int i=0;
int Hush_func(int key) {  
    return key%MAX_HASH_SIZE;  
}  
  
int Hush_search(int key) {  
    int t, pos;  
    pos = Hush_func(key);  
    t = pos;  
    while(hashTable[t]!=key && hashTable[t]!=-1) {  
        t = (t+1) % MAX_HASH_SIZE;  
        if(pos==t) {  
            return -1;  
        }  
    }  
    if(hashTable[t]==-1)  
        return -1;  
    else  
        return t; 
}  
  
int _createHash(int key) {  
    int pos,index;  
    pos = Hush_func(key);
    index = pos;  
    while(hashTable[index]!=-1) { 
        index = (index+1) % MAX_HASH_SIZE;  
        if(pos == index) { 
            printf("Hash Table is full.\n");  
            return -1;  
        }  
    }  
    hashTable[index] = key;  
    return index;
}  

void Hush_printf()
{
    printf("hushtable:[ "); 
    for(i=0; i<MAX_HASH_SIZE;i++)
        printf("%02d ", hashTable[i]);  
    printf("]\n"); 
    	
}  
  
void hush_test()
{
    int flag[30] = {0};  
    for(i=0; i<MAX_HASH_SIZE;i++)
        hashTable[i] = -1;  
    srand(DATA_SIZE);  
    int j=0,data,num,index;  
    while(j!=DATA_SIZE) 
	{  
        data = rand() % 70;  
        if(flag[data] == 0)
		{  
            index=_createHash(data);  
            printf("add %2d to hashtable[%d]\n", data,index);              
            flag[data] = 1;  
            j++;  
        }         
    }  	
    
    Hush_printf();
    while(1){  
        printf("Please input number which you want to search: ");  
        
        scanf("%d",&num);
		 
        if(num>=0 && num<30) {  
            i = Hush_search(num);  
            if(i>=0) {  
                printf("Success!(%d)\n", i);  
            } else {  
                printf("not found!\n");  
            }  
        }  
    }  
	
}
  
int main() 
{  
    hush_test();
} 
