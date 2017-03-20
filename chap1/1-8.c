#include <stdio.h>
int main()
{
	int a,b,c,d;
	a = 0;
	c = 0;
	d = 0;
	while ((b = getchar() ) != EOF)
	{
		if (b == '\t')
			++a;
		if (b == ' ')
	 		++c;
		if (b == '\n')
			++d;
	}
	printf(" no of tabs %d\n,no of space %d\n, no of lines is %d\n,",a,c,d);
         
}  
