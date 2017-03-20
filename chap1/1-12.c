#include <stdio.h>
int main()
{
	int a;
	while((a = getchar()) !=EOF)
	{	if (a == ' '||a == '\t'|| a == '\n')
		{	putchar('\n');
			getchar();
		}
		else  
		{
			putchar(a);
		}
	}
}
