#include<stdio.h>

int main()
{
	int a =555;
	int *p;
	
	p = &a;
	printf("The value of a is %d\n", a);
	printf("The pointer is %x\n", &a);
	
	return 0;
}
