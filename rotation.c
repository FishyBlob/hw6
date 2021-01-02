#include"rotation.h"
#define PI 3.14159265
void rotate( double *x, double *y, double theta )
{
	double X,Y;
	theta*= PI / 180.0;

	X=*(x) * cos(theta)+sin(theta)* *(y);
	Y=cos(theta)* *(y)-*(x) * sin(theta);
	*(y)=Y;
	*(x)=X;
	return;
}