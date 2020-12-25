#include<stdio.h>
#include<stdint.h>
void display(int64_t *ptr)
{
	printf("The integer: %ld\n",*(ptr) );
	uint8_t *ptr2;
	ptr2=(uint8_t*)ptr;
	for(size_t i=0;i<8;i++)
	{
		printf("(%zd) 0x%02X ",i+1,*(ptr2+i) );
	}
	printf("\n");
	return ;
}
void adjust(uint8_t p, int64_t *ptr,uint8_t change)
{
	size_t pos=p;
	uint8_t *ptr2=(uint8_t*)ptr;
	*(ptr2+pos-1)=change;
	return;
}
char blank( char c)
{
	if(c==' ')
	{
		blank(getchar());
	}
	else
		return c;
}
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
	while(scanf("%ld",&choice)!=1||blank(getchar())!='\n'||choice>8||choice<0)
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
		uint64_t change;
		printf("Please enter the new value (0-255): " );
		while(scanf("%ld",&change)!=1||blank(getchar())!='\n'||change>255||change<0)
		{
			while(blank(getchar())!='\n')
			{
				int8_t a=1;
			}
			printf("Error:Invlaid input\n");
			printf("Please enter the new value (0-255): " );
		}
		adjust((uint8_t)choice,&n,change);
		display(&n);
		printf("Please enter the position (1-8, 0: End): ");
		while(scanf("%ld",&choice)!=1||blank(getchar())!='\n'||choice>8||choice<0)
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
