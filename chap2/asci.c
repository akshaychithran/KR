#include <stdio.h>
int lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return c;
}
int main()
{
	char c,n;
	c = getchar();

	n =lower(c);
	printf("%c",n);
}
