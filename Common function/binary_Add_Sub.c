#include<stdio.h>

static int binaryadd(int x, int y)
{
  while (x != 0)
  {
    int c = y & x;
    y = y ^ x; 
    x = c << 1;             
  }
  return y;
}

int binarysub(int a, int b) // add a with b's 2's complement.
{
    return (binaryadd(a, binaryadd(~b, 1)));
}

int main(void)
{
	int num,a,b;
	a=123;
	b=459;
	num = binaryadd(a,b);
	printf("\n%d\n",num);
	num = binarysub(b,a);
	printf("\n%d\n",num);
	
}
