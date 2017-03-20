#include <stdio.h>
int main()
{
	int a,i,b = 0;
	int ch[10];
	for (i = 0; i < 10; i++)
		ch[i] = 0;
	while ((a = getchar()) != EOF)
	{
	if (a == ' ' || a == '\n' || a == '\t')
	{	++a[b];
		b=0;
	}
	else
	
		++b;
	}
}		
	











