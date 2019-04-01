#include <stdio.h>

#define MIN -20000000
#define MAX 100000000

typedef enum 
{
   false = 0,
   true = 1
}bool;

bool _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

static int stoi(char* str)
{
    char *s;
    int n = 0, sign = 0;

    while (*str == ' ' || *str == '\t'|| *str == '\n') 
    {
        str++;
    }

    for (s = str; *s != '\0'; s++) 
    {
        if (_isdigit(*s)) 
	{
            int d = *s - '0';
            n = n * 10 + d;
            if (sign) 
	    {
                if (-n <MIN)
		{
                    n = MIN;
                    break;
                }
            } 
	    else 
	    {
                if (n >MAX)
		{
                    n = MAX;
                    break;
                }
            }
        } 
	else if (*s == '-' && _isdigit(*(s + 1))) 
            sign = 1;
        else if (*s == '+' && _isdigit(*(s + 1))) 
            sign = 0;
	else 
            break;
    }

    return sign ? -n : n;   
}


int main(void)
{
	int num;
	num = stoi("-19999999");
	printf("\n%d\n",num);
}
