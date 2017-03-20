#include <stdio.h>
int hex(char s[])
{
	int i,n = 0;
	for(i = 0;s[i] != '\0';i++){
		if(s[i] >='0' && s[i] <= '9'){
			n = (16 * n )+ s[i] - '0';
		}
		else if (s[i] >= 'a' && s[i] <= 'f'){
			n = s[i] - 'a' + 10 + 16 * n;
		}
		else if (s[i] >= 'A' && s[i] <= 'F'){
			n = s[i] - 'A' + 10 + 16 * n;
		}
		else 
			return 0;
	}
	return n;
}
int main ()
{
	int i = 0,c;
	char s[100];
	printf("Enter a hexadecimal number");
	while ((c = getchar()) != '\n'){
		s[i] = c;
		i++;
	}
	int n = hex(s);
	printf("%d",n);
}
			 
