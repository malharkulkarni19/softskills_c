#include<stdio.h>

int main()
{
	int a;
	printf("Enter the value for a\n");
	scanf("%d", &a);
	
	if(a>1){
		int b = 0;
		while(b<5){
			printf("I am inside\n");
			b = b +1;
		}
	}
	else{
		printf("I am outside\n");
	}
	return 0;
}
