#include"lendian.h"
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

int chk(int input, int64_t *ptr, int64_t top,int64_t bot)
{
	if(input==1)
	{
		printf("%d\n",input );
		if(*ptr>top||*ptr<bot)
		{
			return 0;
		}
	}
	return input;
}