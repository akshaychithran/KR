#include <stdio.h>
int main()
{
	int a,b;
	a = 0;
	while ((b=getchar()) != EOF)
	if (b == '\n')
		++a;
	printf("%d\n",a);
	
}
