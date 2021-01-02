#include "action.h"
int64_t buffer[10][2]={0};
int64_t adjustment[10]={0};
char blank( int c)
{
	if(c==' ')
	{
		c = blank(getchar());
	}
	return c;
}
void ToActionBuff(int64_t a[10][2],int64_t input)
{
	int64_t b[10];
	for (int i = 0; i < 10; ++i)
	{
		if(a[i][0]==0)
		{
			a[i][0]=input;
			return;
		}
		if(i>0)
			b[i-1]=a[i][0];
	}
	b[9]=input;
	for (int i = 0; i < 10; ++i)
	{
		a[i][0]=b[i];
	}
	return;
}
void ToAdjustmentBuff(int64_t a[10][2],int64_t input)//-1->1;-2->0
{
	for (int i = 10; i >=0; i--)
	{
		if(a[i][0]>0&&input==-1&&a[i][1]==0)
		{
			a[i][1]=1;
			return;
		}
		if(a[i][0]>0&&input==-2&&a[i][1]==1)
		{
			a[i][1]=0;
			return;
		}
	}
	return;
}