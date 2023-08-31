//
// Created by user on 8/30/23.
//

#ifndef PROBLEMS_COMMON_H
#define PROBLEMS_COMMON_H

#include <stdio.h>
#include <stdint.h>

void show_bytes(unsigned char *, size_t);
void show_bits(unsigned char *, size_t);
void show_bytes_inline(unsigned char *, size_t, char *);

int logical_rightshift(int, unsigned);

#endif //PROBLEMS_COMMON_H
