#include <stdio.h>
#include <string.h>
int main()
{
	char s[100],t[100];
	char *i;
	int a,b,j = 0,h = 0;
	while ((a = getchar()) != '\n'){
		s[j++] = a;
		}
	s[j] = '\0';
	while ((b = getchar()) != '\n'){
		t[h++] = b;
		}
	 i = strpbrk(s,t);
	printf("%c",i);
	return(0);
}
