#include <stdio.h>
void strcat(char s[],char t[])
{
	int i,j;
	i = j = 0;
		while (s[i] != '\0'){
			i++;
		}
		while ((s[i++] = t[j++]) != '\0')
			;
	s[i] = '\0';
	printf("%s",s);
}
int main()
{
	char s[100], t[100];
	int a,c,i,j;
	j = i = 0;
	while ((a = getchar()) != '\n'){
		s[i] = a;
		i++; 
	}
	while ((c = getchar()) != '\n'){
		t[j] = c;
		j++;
	} 
	strcat(s,t);
}
