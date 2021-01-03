#include <stdio.h>
#include<stdint.h>
#include"action.h"
#include "projection.h"
int main()
{
	int32_t a,b,c,d;
	double x,y,z;
	printf("Please enter the plane: ");
	while(scanf("%d %d %d %d",&a,&b,&c,&d)!=4||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a =0;
		}
		printf("Error:invlaid input\n");
		printf(">Please enter the plane: a b c d<\n");
		printf("Please enter the plane: ");
	}
	display(a,b,c,d);
	printf("Please enter the point: ");
	while(scanf("%lf %lf %lf",&x,&y,&z)!=3||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a =0;
		}
		printf("Error:invlaid input\n");
		printf(">Please enter the point: x y z<\n");
		printf("Please enter the point: ");
	}
	project(&x,&y,&z,a,b,c,d);
	printf("The projection is (%lf,%lf,%lf)\n",x,y,z );
	return 0;
}