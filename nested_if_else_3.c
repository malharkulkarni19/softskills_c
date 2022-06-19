#include<stdio.h>

int main()
{
	int marks;
	printf("Enter the marks you got in CET\n");
	scanf("%d", &marks);
	
	if(marks>180){
		printf("You will get COEP\n");
	}
	else if(marks>100){
		printf("You will get DKTE\n");
	}
	else{
		printf("Shut up idiot, you are not eligible for techanical education\n");
	}
	return 0;
}
