#ifndef POKER_H_INCLUDED
#define POKER_H_INCLUDED

#include <stdio.h>
#include<stdint.h>
#include<stdlib.h>
uint8_t deck[53];
uint8_t check;
void print_card(const uint8_t player[13] );
int32_t sort_card( uint8_t player[13], int32_t ( * compare)( int32_t a,int32_t b ) );
int32_t value(int32_t a);
int32_t suit(int32_t a);
int32_t func01(int32_t a,int32_t b );
int32_t func02(int32_t a,int32_t b );
int32_t func03(int32_t a,int32_t b);

#endif