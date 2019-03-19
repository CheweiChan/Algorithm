#include <stdio.h>
#include"stdlib.h"
#include <time.h>

int arrar[100];
int main(int argc, const char * argv[])
{
	int i,j,number,size;
    srand(time(0));
    printf("\nplease press array size ");
    scanf("%d",&size);
    arrar[0]=(rand()%size);
    for (i=1; i<size;) 
	{
    	number=(rand()%size);
        for (j=0; j<i;j++) 
		{
            if(number==arrar[j])
                break;            
        }
        if(i==j)
        {
            arrar[i]=number;
            ++i;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d,",arrar[i]);   
    }
}
