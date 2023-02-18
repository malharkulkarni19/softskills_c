#include<stdio.h>

int main()
{
	int a = 7;
	
	if(a>4){
		printf("passed\n");
		
		if(a>6){
			printf("eligible\n");
		}
		else{
			printf("passsed but not eligible\n");
		}
	}
	else{
		printf("failed\n");
	}
	return 0;
}
