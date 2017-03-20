#include <stdio.h>
void main()
{
	long a;
	a = 0;
	while (getchar() != EOF)
	++a;
	printf("%1d\n",a);
}
