#include <stdio.h>
int conv(int c);
int main ()
{
	int i=0;
	while(i<300)
	{
		printf("%d\t%d\n",i,conv(i));
		i=i+20;	
	}
}

int conv(int i)
{	
	int a;	
	a= 5 * (i-32) /9;
	return a;
}



