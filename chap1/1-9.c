#include <stdio.h>
int main()
{
	int a,flag=0;
	
	while ((a = getchar()) != EOF)
	{	
		if (a == ' ')
		{	if (flag == 0)
			{ putchar(a);
			flag = 1 ;   
			}
		 }	
		else
		{
			putchar(a);
			flag = 0;
		}
	
	}
}
	
