#include<stdio.h>

int main()
{
	int a;
	printf("Enter the no you want to proceed between 1, 2 and 3\n");
	scanf("%d", &a);
	
	switch(a)
	{
	case 1: printf("You have entered 1\n");
	    break;
	case 2: printf("You have entered 2\n");
	    break;
	case 3: printf("You have entered 3\n");
	    break;
	default: printf("Wrong choice my bro");
	}
	return 0;
}
