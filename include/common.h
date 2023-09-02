//
// Created by user on 8/30/23.
//

#ifndef PROBLEMS_COMMON_H
#define PROBLEMS_COMMON_H

#include <stdio.h>
#include <stdint.h>

void show_bytes(unsigned char *, size_t);
void show_raw_bytes(unsigned char *, size_t);
void show_bits(unsigned char *, size_t);
void show_raw_bits(unsigned char *, size_t);
void show_bytes_inline(unsigned char *, size_t, char *);
int logical_rightshift(int, unsigned);
void show_int(int);
void show_unsigned(unsigned);
void show_short(short);
void show_long(long);
void show_float(float);
void show_double(double);

#endif //PROBLEMS_COMMON_H
