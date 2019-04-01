#include <stdio.h>

// Input: 12345678
//Output: 87654321

static int reverse(int x)
{
    int y = 0;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y;
}


int main(void)
{
	int num;
	num=reverse(12345678);
	printf("\n%d\n",num);
	
	
}
