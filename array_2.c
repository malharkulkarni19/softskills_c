#include<stdio.h>

int main()
{
	char a[20] = {'M', 'A', 'L', 'H', 'A', 'R'};
	int i = 0;
	
	while(a[i] != '\0')
	{
		printf("%c\n", a[i]);
	}
	return 0;
}
