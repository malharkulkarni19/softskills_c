#include<stdio.h>

int main()
{
	int a;
	printf("Enter a Number");
	scanf("%d", &a);
	
	if(a>50){
		printf("You are eligible for SIT\n");
		
		if(a>180){
			printf("You are eligible for COEP\n");
		}
		else{
			printf("You are eligible for DKTE\n");
		}
	}
	else{
		printf("You are not eligible for techanical education\n");
	}
	return 0;
}
