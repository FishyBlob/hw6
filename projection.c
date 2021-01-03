#include"projection.h"
int32_t abs(int32_t a)
{
	if(a>=0)
		return a;
	return -1*a;
}
void Sequential_lineral(int32_t a, char x)
{
	if(a==0)
		return;
	if(a>0)
		printf(" + ");
	else
		printf(" - ");
	if(x==' ')
	{
		printf("%d",abs(a));
		return;
	}
	if(abs(a)==1)
	{
		printf("%c",x);
		return;
	}

	printf("%d%c",abs(a),x );
	return;
}
void First_lineral(int32_t a, char x)//a!=0
{
	if(x==' ')
	{
		printf("%d",a);
		return;
	}
	if(a==-1)
	{
		printf("-%c",x);
		return;
	}
	if(a==1)
	{
		printf("%c",x);
		return;
	}
	
	printf("%d%c",a,x );
	return;
}
void display(int32_t a,int32_t b,int32_t c,int32_t d)
{
	int32_t array[4]={a,b,c,d};
	char symbol[4]={'x','y','z',' '};
	for (int i = 0; i < 4; ++i)
	{
		if(array[i]==0)
			continue;
		printf("The plane is ");
		First_lineral( array[i],symbol[i]);
		for (int j = i+1; j < 4; ++j)
		{
			Sequential_lineral(array[j],symbol[j]);
		}
		printf("=0");
		break;

	}
	printf("\n");
	return;
}
void project( double *x, double *y, double *z, int32_t a, int32_t b, int32_t c, int32_t d )
{
	//ax+by+cz+d=0
	double *point_ptr[3]={x,y,z};
	double vector[3]={a,b,c};
	double dist=0;
	for (int i = 0; i < 3; ++i)
	{
		dist+=vector[i]*vector[i];
	}
	for (int i = 0; i < 3; ++i)
	{
		vector[i]/=dist;
	}
	dist=*x * a + *y * b + *z * c +d;
	for (int i = 0; i < 3; ++i)
	{
		*point_ptr[i]-=vector[i]*dist;
	}
	return;

}
