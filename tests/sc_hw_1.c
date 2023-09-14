//
// Created by user on 9/14/23.
//
#include "../include/common.h"

int main() {
    int a = 1, b = -1, c = 0, d = -2147483648;
    size_t s = sizeof(int);
    show_raw_bytes(&a, s);
    show_raw_bytes(&b, s);
    show_raw_bytes(&c, s);
    show_raw_bytes(&d, s);
    return 0;
}