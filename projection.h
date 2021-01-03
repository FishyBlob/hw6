#ifndef PROJECTION_H_INCLUDED
#define PROJECTION_H_INCLUDED
#include<stdio.h>
#include<stdint.h>
int32_t abs(int32_t a);
void Sequential_lineral(int32_t a, char x);
void First_lineral(int32_t a, char x);
void display(int32_t a,int32_t b,int32_t c,int32_t d);
void project( double *x, double *y, double *z, int32_t a, int32_t b, int32_t c, int32_t d );/*https://zhuanlan.zhihu.com/p/102514602*/

#endif