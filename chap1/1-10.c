#include <stdio.h>
int main()
{
	char a;
	while((a = getchar()) != EOF)
	{	if (a == '\t')
		{printf("\t");
		}
		else if (a =='\b')
		{printf("\b");
		}
		else if (a == '/')
		{printf("\\");
		}
		else 
		putchar(a);
	}
}
