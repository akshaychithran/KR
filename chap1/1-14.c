#include <stdio.h>
void main()
{
	int a,i,j,c;
	int ch[128];
	for (i = 0;i < 128;i++)
		ch[i] = 0;
	while ((a = getchar()) != EOF)
		ch[a]++;
	for(i = 0 ;i < 128 ;++i)
	{	putchar(i);
	
		for ( j = 0;j < ch[i] ;j++)
			putchar('*');
			putchar('\n');
	}
}			
