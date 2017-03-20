#include <stdio.h>
int rightrot(unsigned x,int n)
{
	unsigned  a;
	a = x << (32 - n);
	x = x >> n;
	x = x | a;
	return x;
}
int main()
{
	int b;
	unsigned i,j;
	printf("enter length ");
	scanf("%d",&i);
	printf("no. of times to be rotatted");
	scanf("%d",&b);
	j = rightrot(i,b);
	printf("%d",j);
}
