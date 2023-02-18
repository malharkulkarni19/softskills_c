#include<stdio.h>

int main()
{
	char a[20] = "DKTE";
	int i = 0;
	
	printf("%s\n", a);
	
	while(a[i] != '\0')
	{
		i++;
	}
	return 0;
}
