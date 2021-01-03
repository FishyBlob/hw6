#include<stdio.h>
#include<stdint.h>
#include "lendian.h"
#include<stdio.h>
#include<stdint.h>
#include "action.h"

int main()
{

	int64_t n;
	int64_t choice;
	printf("Please input the integer: ");
	while(scanf("%ld",&n)!=1||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a=1;
		}
		printf("Error:Invlaid input\n");
		printf("Please input the integer: ");
	}
	display(&n);
	printf("Please enter the position (1-8, 0: End): ");
	while(scanf("%ld",&choice)!=1||choice>8||choice<0||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a=1;
		}
		printf("Error:Invlaid input\n");
		printf("Please enter the position (1-8, 0: End): ");
	}
	while(choice>0)
	{
		int64_t change=-1;
		printf("Please enter the new value (0-255): " );
		while(scanf("%ld",&change)!=1||change>255||change<0|| blank(getchar())!='\n')
		{

			while(blank(getchar())!='\n')
			{
				int8_t a=1;
			}
			printf("Error:Invlaid input\n");
			printf("Please enter the new value (0-255): " );
		}
		adjust((uint8_t)choice,&n,(uint8_t)change);
		display(&n);
		printf("Please enter the position (1-8, 0: End): ");
		while(scanf("%ld",&choice)!=1||choice>8||choice<0||blank(getchar())!='\n')
		{
			while(blank(getchar())!='\n')
			{
				int8_t a=1;
			}
			printf("Error:Invlaid input\n");
			printf("Please enter the position (1-8, 0: End): ");
		}
	}
	printf("End\n");
	return 0;
}
