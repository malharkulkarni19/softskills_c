#include<stdio.h>

int main()
{
	int a[5] = {11, 12, 13, 14, 15};
	int i,t = 0;
	
	for (i=0;i<5;i++)
	{
		t = t +a[i];
	}
	
	printf("Total = %d\n", t);
	return 0;
}
