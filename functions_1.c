#include<stdio.h>

int main()
{
	int a, b, c;
	
	printf("Enter the first number\n");
	scanf("%d", &a);
	printf("Enter the second number\n");
	scanf("%d", &b);
	
	c = sum(a,b);
	
	printf("The answer is : %d\n", c);
	return 0;
}

int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}
