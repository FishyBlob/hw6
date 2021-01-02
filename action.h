#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include<stdio.h>
#include<stdint.h>
#include<limits.h>
int64_t buffer[10][2];
int64_t adjustment[10];
char blank( int c);
void ToActionBuff(int64_t a[10][2],int64_t input);
void ToAdjustmentBuff(int64_t a[10][2],int64_t input);//-1->1;-2->0;

#endif