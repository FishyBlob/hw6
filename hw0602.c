#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#include "action.h"


int main()
{
	while(1)
	{
		int64_t input;
		printf("input: ");
		while(scanf("%lld",&input)!=1||input<-2||blank(getchar())!='\n')
		{
			while(blank(getchar())!='\n')
			{
				int8_t a=1;
			}
			printf("Error: invalid input\n");
			printf("input: ");
		}
		if(input==0)
			break;
		if(input>0)
			ToActionBuff(buffer,input);
		else
			ToAdjustmentBuff(buffer,input);
		

	}
	for (int i = 0; i < 10; ++i)
	{
		if(buffer[i][0]==0)
			break;
		if(buffer[i][1]==0)
			printf(" %lld",buffer[i][0]);
	}
	printf("\n");
	return 0;
}