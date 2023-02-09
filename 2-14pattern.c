#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              	                  // Reading input from STDI    // Writing output to STDOUT
	int a[num][num];
	for(int i=0;i<num;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(i==0||i==num-1||i+j==num-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
			printf("\n");
		
	}
}


