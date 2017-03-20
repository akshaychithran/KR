#include <stdio.h>
void squeeze(char s[],char t[])
{
	int i , j, k = 0;
	for (i = 0;s[i] != '\0';i++){
		for (j = 0 ;(s[i] != t[j])&& (t[j] != '\0');++j)
			;
        		if(t[j] == '\0'){
				s[k++] = s[i];	
				
			}
	}
	s[k] = '\0';
	printf("%s",s);
			
		
}
int main()
{
	char s[100],t[100];
	int a,i = 0,j = 0,c;
	while ((a = getchar()) != '\n'){
 		s[i] = a;
		i++;
	}
	s[i] = '\0';
	while ((c = getchar()) != '\n'){
		t[j] = c;
		j++;
	}
	t[j] = '\0';
	squeeze (s,t);
	
}
		
