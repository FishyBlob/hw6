#include "poker.h"

uint8_t deck[53]={0};
uint8_t check=0;
void print_card(const uint8_t player[13] )
{
	

	for (uint8_t i = 0; i < 13 ; ++i)
	{
		printf("%3d",player[i] );
	}
	printf("\n");
	if(check<4)
	{
		for (uint8_t i = 0; i < 13 ; ++i)
		{
			if(player[i]<1||player[i]>52)
			{
				printf("Wraning! card %d is not valid\n",player[i]);
				printf("./hw0605 terminated\n");
				exit(1);
			}
			if(deck[player[i]]==0){
				deck[player[i]]=1;
			}
			else
			{
				printf("Wraning! card %d is repeated\n",player[i]);
				printf("./hw0605 terminated\n");
				exit(1);
			}
		}
		check++;
	}

	return;

}
int32_t sort_card( uint8_t player[13], int32_t ( * compare)( int32_t a,int32_t b ) )
{
	for (uint8_t i = 0; i < 13 ; ++i)
	{
		uint8_t former=i;
		for (uint8_t j = i+1; j < 13 ; ++j)
		{
			if(compare((int32_t)player[former],(int32_t)player[j]))
				former=j;
		}
		uint8_t tmp=player[former];
		player[former]=player[i];
		player[i]=tmp;
	}
	return 0;
}
int32_t value(int32_t a)
{
	if((a%=13)==0)
		return 13;
	return a;
}
int32_t suit(int32_t a)
{
	return (a-1)/13;
}
int32_t func01(int32_t a,int32_t b )//According to the card value in the descending order.
{	
									//compare((int32_t)player[former],(int32_t)player[j])
	if(value(b)>value(a))
		return 1;
	return 0;
}
int32_t func02(int32_t a,int32_t b )//According to the card value in the descending order, but ”2” is the biggest number.
{									//compare((int32_t)player[former],(int32_t)player[j])
	if((b=value(b))==2)
		b=14;
	if((a=value(a))==2)
		a=14;
	if(b>=a)
		return 1;

	return 0;
		
}
/*According to the card suit, ♠ → ♡ → ♢ → ♣. Each suit should be sorted in the
descending order according to the card value.*/
int32_t func03(int32_t a,int32_t b)
{
	if(suit(a)==suit(b))
		return func01(a,b);
	if(suit(b)<suit(a))
		return 1;
	return 0;
}