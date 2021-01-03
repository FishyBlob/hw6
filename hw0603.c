#include <stdio.h>
#include<math.h>
#include<stdint.h>
#include"action.h"
#include"rotation.h"



int main()
{
	double x,y,theta;
	printf("Please enter a point: ");
	while(scanf("%lf %lf",&x,&y)!=2||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a =0;
		}
		printf("Error:invlaid input\n");
		printf("Please enter a point: x y\n");
		printf("Please enter a point: ");
	}
	printf("Please enter theta (0-360): ");
	while(scanf("%lf",&theta)!=1||theta<0||theta>360||blank(getchar())!='\n')
	{
		while(blank(getchar())!='\n')
		{
			int8_t a =0;
		}
		printf("Error:invlaid input\n");
		printf("Please enter theta (0-360): ");
	}
	rotate(&x,&y,theta);
	printf("%lf %lf\n",x,y );
	return 0;
}
