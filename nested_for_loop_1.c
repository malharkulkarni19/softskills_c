#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=0;i<2;i++){
		printf("F1\n");
		
		for(j=0;j<2;j++){
			printf("F2\n");
			
			for(k=0;k<2;k++){
				printf("F3\n");
			}
		}
	}
	return 0;
}
