#include<stdio.h>

int main()
{
	int a = 4;
	int b = 4;
	
	if((a&&b)^b){
		printf("f1\n");
	}
	else{
		printf("f2\n");
	}
	return 0;
}
