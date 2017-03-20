#include <stdio.h>
void squeeze(char s[],int  c)
{
	int i,j = 0;
	for (i = 0;s[i] != '\0';i++){
		if (s[i] != c){
			s[j] = s[i];
			j++;
		}
	}
	s[j] = '\0';
	printf("%s",s);
	
}
int main()
{
	char s[100];
	int a,c,i = 0;
	while  ((a = getchar()) != EOF){
		s[i] = a;
		i++;
	}
	printf("enter char");
	c = getchar();
	squeeze(s,c);

}
