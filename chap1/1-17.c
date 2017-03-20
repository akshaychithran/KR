#include <stdio.h>
int main()
{
	char ak[1000][1000];
	int a,y,x,count = 0,i = 0,j = 0;
	while ((a = getchar()) != EOF){
	if (a != '\n')
		{ak[i][j] = a;
		j++;
		}
	else 
		{
		i++;
		j = 0;
		}
	}
	for (x = 0;x < i;x++)/*to enter each line*/
	{	count = 0;
		for (y = 0;ak[x][y] != '\0';y++) /* j is not given because it changes each line so to check every j, upto max should  given*/
		{
			count++;
		}
		if(count > 10)
		printf("%s\n",ak[x]);
		}
	
		
	
}










