#include<stdio.h>
int sqr(int b);

int main()
{
	int a,b;
	printf("Enter the number you want a square of\n");
	scanf("%d", &a);
	
	b = sqr(a);
	printf("The answer is %d\n", b);
}
int sqr(int u)
{
	int k;
	k = u*u;
	return k;
}
