#include <stdio.h>
#define MAXWL 20
#define MAXNO 25
int main ()
{
	int nw = 0,nl,nc =0,i,c;
	int word[MAXNO];
	for (i =0; i < MAXNO; i++)
		word[i] = 0;
	while ((c = getchar()) != EOF)
	{
		nc++;
	if (c == ' '||c == '\n' || c == '\t')
	{	word[nw] = nc - 1;
		nw++;
		nc = 0;
	}
	}
}
