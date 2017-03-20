#include <stdio.h>
int conv(char s[])
{
	int i,n;
	n = 0;
	for (i = 0; s[i] >='0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;
}
int main()
{
	char s[100] ,c;
	int i = 0,n;
	while ((c = getchar()) != EOF){
		s[i] = c;
		i++;
	}
	n = conv(s);
	printf("%d",n);
}
