//
// Created by user on 9/2/23.
//
#include "../include/common.h"

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    unsigned char *p = &x;
    p[i] = b;
    return *((unsigned *)p);
}

int main() {
    show_unsigned(replace_byte(0x12345678, 2, 0xAB));
    show_unsigned(replace_byte(0x12345678, 0, 0xAB));
    return 0;
}