#ifndef LENDIAN_H_INCLUDED
#define LENDIAN_H_INCLUDED
#include<stdio.h>
#include<stdint.h>
void display(int64_t *ptr);
void adjust(uint8_t p, int64_t *ptr,uint8_t change);

int chk(int input, int64_t *ptr, int64_t top,int64_t bot);
#endif