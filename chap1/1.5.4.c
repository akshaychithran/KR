#include <stdio.h>
int main()
{
	int a,b,c,d;
	a = 0 ,b = 0,c = 0,d = 0;
	while ((a = getchar()) != EOF)
	{++b;
		if (a =='\n')
		++c;
		if (a == ' '|| a =='\t'|| a =='\n')
		++d;
	}
	printf("no of characters is %d\n,no of new lines %d\n,no of words %d\n",b,c,d);
}
