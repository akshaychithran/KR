#include <stdio.h>
int invert(unsigned x,int p,int n)
{
	int c;	
	c = x ^ (~ (~ 0 << n) << (p + 1 - n));
	return c;
}
int main()
{
	int a,b;
	unsigned i,j;
	printf("enter unsinged value\t");
	scanf("%d",&i);
	printf("enter position\t");
	scanf("%d",&a);
	printf("enter no of integers\t");
	scanf("%d",&b);
	j = invert(i,a,b);
	printf("\n%d",j);
}
